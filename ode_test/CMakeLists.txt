cmake_minimum_required(VERSION 2.8.11)
project(ode_test)

add_executable(rk4_test src/rk4_test.cpp)
target_link_libraries(rk4_test)

add_executable(rk4_main src/main.cpp src/rk4.cpp)
target_link_libraries(rk4_main)