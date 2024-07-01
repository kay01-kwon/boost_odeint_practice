cmake_minimum_required(VERSION 2.8.11)
project(ode_test)


include_directories(
    INCLUDE_DIRS include
)

add_executable(rk4_main src/main.cpp include/rk4.cpp)
target_link_libraries(rk4_main)