cmake_minimum_required(VERSION 3.20)
project(B1_Gandalf)

set(CMAKE_CXX_STANDARD 20)

add_executable(B1_Gandalf main.cpp
        Alimento.cpp
        Alimento.h
        Abarrote.cpp
        Abarrote.h
        Lembas.cpp
        Lembas.h
        Manzana.cpp
        Manzana.h
        Melon.cpp
        Melon.h
        HoneyCake.cpp
        HoneyCake.h
        Hongos.cpp
        Hongos.h
        FabricaAlimentos.cpp
        FabricaAlimentos.h
        Gandalf.cpp
        Gandalf.h
)
