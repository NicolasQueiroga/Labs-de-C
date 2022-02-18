cmake_minimum_required(VERSION 3.10)
project(Lab-06 VERSION 1.0.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -lm")
set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")


add_library(
	lab6
	libs/lab6/lab6.c
	)

target_include_directories(lab6 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH "../bin")
add_executable(run src/main.c)

target_link_libraries(run PRIVATE lab6)
