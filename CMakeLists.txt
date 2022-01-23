cmake_minimum_required(VERSION 3.5)
project(autocomplete VERSION 0.1 LANGUAGES CXX )


include_directories( include )

add_executable( autocomplete
                src/Main.cpp
                src/IO.cpp
                src/DatabaseHelper.cpp
                src/Processor.cpp
)