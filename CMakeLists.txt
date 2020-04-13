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
    testes/test_simple_commands.c
    testes/test_simple_commands.h
    README.md io.c io.h acessar_estado.c acessar_estado.h)
