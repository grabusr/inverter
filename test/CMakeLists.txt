cmake_minimum_required(VERSION 2.8)

project(InverterTest)

add_definitions(-std=c++14)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(${gmock_SOURCE_DIR}/include)
include_directories(${InverterLib_SOURCE_DIR})

AUX_SOURCE_DIRECTORY("." SOURCE_FILES)

add_executable(InverterTest ${SOURCE_FILES})

target_link_libraries(InverterTest gmock gmock_main)
target_link_libraries(InverterTest InverterLib)