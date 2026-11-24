cmake_minimum_required(VERSION 3.14)

project(desupro)

add_subdirectory(model)

add_executable(desupro
  main.cpp
)

target_link_libraries(desupro
PRIVATE
  model
)
