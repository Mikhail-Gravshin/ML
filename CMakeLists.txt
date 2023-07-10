cmake_minimum_required(VERSION 3.5)

project(01.ML)

add_executable(ML 
    main.cpp
)

set_target_properties(ML PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)