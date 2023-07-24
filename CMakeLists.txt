project(ringbuffer-test)
cmake_minimum_required(VERSION 2.8.12)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)


add_library (ringbuffer STATIC ringbuffer.c)

add_executable(ringbuffer-test test.c)

target_link_libraries(ringbuffer-test PUBLIC ringbuffer)
