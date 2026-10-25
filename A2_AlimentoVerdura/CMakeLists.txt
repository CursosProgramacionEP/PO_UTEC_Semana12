cmake_minimum_required(VERSION 3.20)
project(A2_AlimentoVerdura)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2_AlimentoVerdura main.cpp
        Alimento.cpp
        Alimento.h
        Verdura.cpp
        Verdura.h
)
