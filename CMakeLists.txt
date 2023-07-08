#设置cmake最低版本要求
cmake_minimum_required(VERSION 3.15)

#设置项目名称
project(cmake-tutorial)

#设置C++标准
set(CMAKE_CXX_STANDARD 11)

#设置源文件变量
set(SOURCE_FILES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

#设置版本号
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 2)

#配置头文件，将CMake设置传递给源代码
configure_file(
        "${PROJECT_SOURCE_DIR}/version.h.in"
        "${PROJECT_SOURCE_DIR}/version.h"
)

set(SOURCE_FILES ${SOURCE_FILES} ${PROJECT_SOURCE_DIR}/version.h)