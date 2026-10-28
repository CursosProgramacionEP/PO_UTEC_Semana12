cmake_minimum_required(VERSION 3.20)
project(A4_AnimalesJerarquia)

set(CMAKE_CXX_STANDARD 20)

add_executable(A4_AnimalesJerarquia main.cpp
        Tipos.h
        CAlimento.cpp   CAlimento.h
        CAnimal.cpp     CAnimal.h
        CAve.cpp        CAve.h
        CMamifero.cpp   CMamifero.h
        CFelino.cpp     CFelino.h
        CDomestico.cpp  CDomestico.h
        CSalvaje.cpp    CSalvaje.h
        CGallina.cpp    CGallina.h
        CRaton.cpp      CRaton.h
        CPerro.cpp      CPerro.h
        CGato.cpp       CGato.h
        CTigre.cpp      CTigre.h
)
