
cmake_minimum_required(VERSION 3.29)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

set(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/modules/")

project(lockless 
	VERSION 0.0.1
	LANGUAGES CXX
)

add_library(lockless STATIC)
target_sources(lockless
	PRIVATE
		${SOURCE}queue.cppm
		${SOURCE}lockless.cppm
)

add_custom_target(generate_docs
	COMMAND doxygen Doxyfile
	COMMAND make clean -C ${CMAKE_CURRENT_SOURCE_DIR}/docs/sphinx
	COMMAND sphinx-build -M html 
		${CMAKE_CURRENT_SOURCE_DIR}/docs/sphinx 
		${CMAKE_CURRENT_SOURCE_DIR}/docs/sphinx/_build 
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	COMMENT "Generating documentation..."
	VERBATIM
)

