cmake_minimum_required(VERSION 3.20)

project(laTorre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(laTorre main.cpp distancia.cpp distancia.h)
