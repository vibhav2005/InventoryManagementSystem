cmake_minimum_required(VERSION 3.20)

project(InventoryManagementSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)                                   

add_executable(
    InventoryManagementSystem
    main.cpp
    src/product.cpp
    src/I_tory.cpp
)