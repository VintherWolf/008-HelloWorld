cmake_minimum_required(VERSION 3.13)
project(008-HelloWorld)

include_directories(include)
set(SOURCES src/main.cpp src/helloworld/helloworld.cpp)
#add_subdirectory(src)
add_executable(008-HelloWorld ${SOURCES})

