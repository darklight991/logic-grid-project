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

add_executable(test_no_mistakes tests/test_no_mistakes.cpp)
add_test(NAME no_mistakes COMMAND test_no_mistakes)

add_executable(test_row_duplicate tests/test_row_duplicate.cpp)
add_test(NAME row_duplicate COMMAND test_row_duplicate)

add_executable(test_subgrid_duplicate tests/test_subgrid_duplicate.cpp)
add_test(NAME subgrid_duplicate COMMAND test_subgrid_duplicate)
