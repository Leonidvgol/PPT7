cmake_minimum_required(VERSION 3.25)

add_executable( project2 main.cpp utility.cpp ram.cpp keyboard.cpp gpu_display.cpp disk.cpp cpu.cpp 
						 ${MY_INCLUDE_DIR}/utility.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/keyboard.h 
						 ${MY_INCLUDE_DIR}/gpu_display.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/cpu.h)
target_include_directories( project2 PUBLIC ${MY_INCLUDE_DIR})
