# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HW6_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HW6_autogen.dir\\ParseCache.txt"
  "HW6_autogen"
  )
endif()
