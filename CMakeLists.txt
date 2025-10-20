cmake_minimum_required(VERSION 3.10)
project(LogicGridGame)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
src/main.cpp
# src/Puzzle.cpp
# src/Cell.cpp
# src/Game.cpp
# src/Solver.cpp
# src/HintSystem.cpp
)

add_executable(logic_grid_game ${SOURCES})
