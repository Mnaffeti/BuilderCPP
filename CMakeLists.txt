cmake_minimum_required(VERSION 3.26)
project(BuilderDP)

set(CMAKE_CXX_STANDARD 17)

add_executable(BuilderDP Source/main.cpp
        Source/Builder.cpp
        Headers/Builder.h
        Source/Product.cpp
        Headers/Product.h
        Headers/ConcreteBuilder.h
        Headers/Orchestor.h
        Source/Orchestor.cpp
        Source/Client.cpp
        Source/Client.h
)
