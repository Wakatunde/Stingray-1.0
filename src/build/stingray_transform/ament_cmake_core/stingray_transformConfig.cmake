# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_stingray_transform_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED stingray_transform_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(stingray_transform_FOUND FALSE)
  elseif(NOT stingray_transform_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(stingray_transform_FOUND FALSE)
  endif()
  return()
endif()
set(_stingray_transform_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stingray_transform_FIND_QUIETLY)
  message(STATUS "Found stingray_transform: 0.0.0 (${stingray_transform_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stingray_transform' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${stingray_transform_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stingray_transform_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${stingray_transform_DIR}/${_extra}")
endforeach()
