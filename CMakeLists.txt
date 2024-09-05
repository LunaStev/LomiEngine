cmake_minimum_required(VERSION 3.29)
project(LomiEngine VERSION 1.0 LANGUAGES CXX)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Vulkan REQUIRED)

# 빌드 디렉토리 설정
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# 소스 디렉토리 추가
add_subdirectory(src)
