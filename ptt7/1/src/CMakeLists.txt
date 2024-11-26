add_executable (1 Medicine.cpp  ${MY_INCLUDE_DIR}/Medicine.h)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 1 PROPERTY CXX_STANDARD 20)
endif()

target_include_directories( 1 PUBLIC ${MY_INCLUDE_DIR})