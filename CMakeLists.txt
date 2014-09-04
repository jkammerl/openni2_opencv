cmake_minimum_required(VERSION 2.8.3)
project(openni2_opencv)

find_package(PkgConfig)

pkg_check_modules(PC_OPENNI2 libopenni2)
if (NOT PC_OPENNI2_FOUND)
  pkg_check_modules(PC_OPENNI2 REQUIRED openni2)
endif()

include_directories(include 
                    ${PC_OPENNI2_INCLUDE_DIRS}
                    )

link_directories(${PC_OPENNI2_LIBRARY_DIRS})

add_executable(openni2_opencv src/main.cpp
                              src/openni2_wrapper.cpp
                              src/openni2_frame_listener.cpp)
target_link_libraries(openni2_opencv ${PC_OPENNI2_LIBRARIES})

