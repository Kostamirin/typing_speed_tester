# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/typing_speed_tester_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/typing_speed_tester_autogen.dir/ParseCache.txt"
  "typing_speed_tester_autogen"
  )
endif()
