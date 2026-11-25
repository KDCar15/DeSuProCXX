cmake_minimum_required(VERSION 3.14)

add_library(model OBJECT
  race.cpp
  species.cpp
)

target_include_directories(model PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)
