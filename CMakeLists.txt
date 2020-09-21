CMAKE_MINIMUM_REQUIRED(VERSION 3.9.0) 
PROJECT(xy)                      

# Declare the executable target built from your sources
add_executable(q1 src/q1/answer.cpp)
add_executable(q2 src/q2/answer.cpp)
add_executable(q3 src/q3/answer.cpp)
add_executable(q4 src/q4/answer.cpp)
add_executable(q5 src/q5/answer.cpp)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
