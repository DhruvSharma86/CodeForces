cmake_minimum_required(VERSION 4.3)
project(C_Cpp)

set(CMAKE_CXX_STANDARD 20)

#add_executable(C_Cpp main_old.cpp
#)
#add_executable(C_Cpp Watermelon.cpp
#        main_old.cpp)
#
#add_executable(C_Cpp main_old.cpp
#        Unit1.cpp)
#add_executable(Watermelon Watermelon.cpp)

add_executable(main_old main_old.cpp)
add_executable(Watermelon "4A - Watermelon.cpp")
add_executable(50A_Domino_piling "50A - Domino piling.cpp")
add_executable(617A_Elephant "617A_Elephant.cpp")
add_executable(282A_Bit++ 282A_Bit++.cpp)
add_executable(158A_NextRound 158A_NextRound.cpp)