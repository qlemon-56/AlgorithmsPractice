# CMakeList.txt : CMake project for AlgorithmsPractice, include source and define
# project specific logic here.
#

cmake_minimum_required(VERSION 4.1)
# Add source to this project's executable.
add_executable (AlgorithmsPractice "AlgorithmsPractice.cpp" "AlgorithmsPractice.h"    "Algos/factorial.cpp" "Algos/subsets.cpp" "Algos/orderList.cpp" "Algos/permutations.cpp" "Algos/coinProblem.cpp" "Algos/twoSum.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AlgorithmsPractice PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
