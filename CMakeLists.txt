cmake_minimum_required(VERSION 3.15)
project(Rastros_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Rastros_C
        Camadas/dados/dados.c
        Camadas/dados/dados.h
        Camadas/dados/modificar_estado.c
        Camadas/dados/modificar_estado.h
        Camadas/dados/acessar_estado.c
        Camadas/dados/acessar_estado.h

        Camadas/interface/interface.c
        Camadas/interface/interface.h
        Camadas/interface/io.c
        Camadas/interface/io.h

        Camadas/logica/logica.c
        Camadas/logica/logica.h
        Camadas/logica/auxiliares.c
        Camadas/logica/auxiliares.h

        Camadas/testes/test_simple_commands.c
        Camadas/testes/test_simple_commands.h

    main.c
    LICENSE
    README.md)
