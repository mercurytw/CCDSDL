cmake_minimum_required(VERSION 3.6)
project(sdl_collider)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

message(STATUS "start running cmake...")
find_package(SDL REQUIRED)

if(SDL_FOUND)
    message(STATUS "SDL_INCLUDE_DIR: ${SDL_INCLUDE_DIR}")
    message(STATUS "SDL_LIBRARY: ${SDL_LIBRARY}")
endif()


include_directories(${SDL_INCLUDE_DIR})

set(SOURCE_FILES ColliderApp.cpp ColliderApp.h)
add_executable(sdl_collider ${SOURCE_FILES})
target_link_libraries(sdl_collider ${SDL_LIBRARY})