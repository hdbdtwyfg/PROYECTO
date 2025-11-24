cmake_minimum_required(VERSION 4.0)
project(PROYECTO)

set(CMAKE_CXX_STANDARD 20)

add_executable(PROYECTO main.cpp
        CElementos.cpp
        CElementos.h
        CTablero.cpp
        CTablero.h
        Definicion.h
        CLinea.cpp
        CLinea.h
        CPunto.cpp
        CPunto.h
        CCaja.cpp
        CCaja.h)
