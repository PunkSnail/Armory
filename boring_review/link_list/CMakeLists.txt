cmake_minimum_required(VERSION 2.6)                                                                                  

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wconversion -g -Wall")

# kernel style
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DLINUX_LIST")

include_directories(inc ../common)

aux_source_directory(${PROJECT_SOURCE_DIR}/src RUN_TEST_SOURCES)

add_executable(run_test ${RUN_TEST_SOURCES})

target_link_libraries(run_test)

