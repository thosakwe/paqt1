cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
	src/main.cpp
	src/compress.h
	src/compress.cpp
)

add_executable(paqt ${SOURCE_FILES})
