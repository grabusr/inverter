cmake_minimum_required(VERSION 2.8)

project(InverterLib)

add_definitions(-std=c++14)

AUX_SOURCE_DIRECTORY("." SOURCE_FILES)

add_library(InverterLib STATIC ${SOURCE_FILES})