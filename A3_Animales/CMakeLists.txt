cmake_minimum_required(VERSION 3.20)
project(A3_Animales)

set(CMAKE_CXX_STANDARD 20)

add_executable(A3_Animales main.cpp
        CAlimento.cpp
        CAlimento.h
        CAnimal.cpp
        CAnimal.h
        CGallina.cpp
        CGallina.h
        CRaton.cpp
        CRaton.h
        CGato.cpp
        CGato.h
        CPerro.cpp
        CPerro.h
        CTigre.cpp
        CTigre.h
        Tipos.h
)
