cmake_minimum_required(VERSION 3.14)

add_library(model)

target_sources(model
PRIVATE race.cpp

PUBLIC FILE_SET HEADERS FILES race.h
)
