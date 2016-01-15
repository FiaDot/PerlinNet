cmake_minimum_required(VERSION 3.3)
project(PerlinNet)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


find_package(Boost 1.58.0 COMPONENTS system filesystem REQUIRED)

if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})
endif()

set(SOURCE_FILES main.cpp src/echo.pb.cc include/echo.pb.h)
add_executable(PerlinNet ${SOURCE_FILES})


if(Boost_FOUND)
    target_link_libraries(PerlinNet ${Boost_LIBRARIES})
endif()


target_link_libraries(PerlinNet protobuf.10)