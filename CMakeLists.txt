cmake_minimum_required(VERSION 3.24)
project(SOM_Smart_Order_Manager)

set(CMAKE_CXX_STANDARD 17)

add_executable(SOM_Smart_Order_Manager main.cpp Person.cpp Person.h Driver.cpp Driver.h)
