cmake_minimum_required(VERSION 2.8)
project(IntiveTestAll)

add_subdirectory(lib)
add_subdirectory(test)
add_subdirectory(prodCode)

aux_source_directory("." SOURCE_FILES)

add_executable(InverterUse ${SOURCE_FILES})

target_link_libraries(InverterUse InverterLib)

# added running test in compile time
add_custom_target(RunningTest
        COMMAND InverterTest
        COMMENT "Running Unit Test...")

add_dependencies(InverterUse RunningTest)