cmake_minimum_required(VERSION 3.20)

project(EstandarCompilador VERSION 1.0 LANGUAGES CXX)

set(CMAKE_XX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(EstandarCompilador EstandarCompilador.cpp)
