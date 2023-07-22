# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TouristManagerApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TouristManagerApp_autogen.dir\\ParseCache.txt"
  "TouristManagerApp_autogen"
  )
endif()
