import rclpy
from rclpy.node import Node
from mavros_msgs.msg import OverrideRCIn
from stingray_msg.msg import StingrayControl


class ThrusterControlNode(Node):
    def __init__(self):
        super().__init__('ThrusterControlNode')
        self.subscription = self.create_subscription(
            StingrayControl,
            '/stingray/control',
            self.control_callback,
            10
        )
        self.publisher = self.create_publisher(
            OverrideRCIn,
            '/mavros/rc/override',
            10
        )
    
    def control_callback(self, msg):
        # Translate control commands to MAVROS OverrideRCIn message
        # Channel mappings:
        throttle = 1500  # Default throttle value
        yaw = int(msg.horizontal_rotation)  # Yaw mapped to horizontal rotation
        pitch = int(msg.vertical_rotation)  # Pitch mapped to vertical rotation
        roll = 1500  # No roll control in this mapping
        forward = int(msg.forward_backward)  # Forward/backward mapped to forward control
        lateral = int(msg.left_right)  # Left/right strafing mapped to lateral control
        
        # Check if increase altitude button is pressed
        if msg.increase_altitude > 1500:
            throttle = int(msg.increase_altitude) # Increase altitude

        # Check if decrease altitude button is pressed
        if msg.decrease_altitude < 1500:
            throttle = int(msg.decrease_altitude)  # Decrease altitude

        # Create OverrideRCIn message
        override_msg = OverrideRCIn()
        #override_msg.channels = [pitch, roll, throttle, yaw, forward, lateral] #+ [0] * 12  # Fill unused channels with zeros
        override_msg.channels[0] = pitch
        override_msg.channels[1] = roll
        override_msg.channels[2] = throttle
        override_msg.channels[3] = yaw
        override_msg.channels[4] = forward
        override_msg.channels[5] = lateral

        ########################################################################
        # Mapping for light levels
        light_level = msg.light_step
        

        # Mapping for up/down on dpad
        camera_tilt_speed = msg.camera_angle

        # Create OverrideRCIn message
        #override_msg = OverrideRCIn()
        #override_msg.channels = [0] * 18  # Assuming 16 channels
        override_msg.channels[8] = light_level
        override_msg.channels[9] = camera_tilt_speed  # Channel 11 for camera tilt     Range: 1300-1700
        #####################################################################################    

        
        # Publish OverrideRCIn message
        self.publisher.publish(override_msg)


def main(args=None):
    rclpy.init(args=args)
    thruster_node = ThrusterControlNode()
    rclpy.spin(thruster_node)
    thruster_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
