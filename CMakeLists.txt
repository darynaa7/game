cmake_minimum_required(VERSION 3.9.1) 
project(game) 

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)



set(SOURCES main.cpp 
            Enemy.cpp 
            Player.cpp
            game.cpp
	    GameEntity.cpp)

add_executable(game ${SOURCES})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
