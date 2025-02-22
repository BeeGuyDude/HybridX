#0) Configure project directory settings
cmake_minimum_required(VERSION 3.31)
project(HybridX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#1) Add the test executable
add_executable(hybridx_test tests/test.cpp src/hybridCar.cpp src/electricCar.cpp src/gasolineCar.cpp)

#2) Include directories for the test target
target_include_directories(hybridx_test PRIVATE ${PROJECT_SOURCE_DIR}/include)

#3) Enable testing
enable_testing()
