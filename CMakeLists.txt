cmake_minimum_required(VERSION 3.15)
project(Rastros_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Rastros_C
    dados.c
    dados.h
    interface.c
    interface.h
    LICENSE
    logica.c
    logica.h
    main.c
    modificar_estado.c
    modificar_estado.h
    README.md io.c io.h acessar_dados.c acessar_dados.h)
