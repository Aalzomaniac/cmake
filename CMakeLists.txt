cmake_minimum_required(VERSION 3.16.3)

project("TEST")
add_library(add SHARED lib/src/add.cpp)
target_include_directories(add PUBLIC lib/inc)
target_link_libraries(add PUBLIC Threads::Threads)

add_executable(a.bin src/main.cpp)
set(THREADS_PREFER_PTHREAD_FLAH ON)

find_package(Threads REQUIRED)

target_link_libraries(a.bin add)
target_include_directories(a.bin PUBLIC lib/inc)