/// @file io.h
/// @brief Contém declarações e comentários para documentação das funções em io.c

#ifndef RASTROS_IO_H
#define RASTROS_IO_H
#include <stdio.h>
#include "Camadas/dados/dados.h"
#include "Camadas/logica/logica.h"
#include "Camadas/logica/auxiliares.h"

/// Função deve gravar em um ficheiro o tabuleiro com as jogadas
/// @ingroup sub2Alpha1
/// \param e é o estado do tabuleiro
/// \param file_path é o nome do ficheiro
void gr (ESTADO *e, char *file_path);

/// Função deve ler o ficheiro de um tabuleiro
/// @ingroup sub2Alpha1
/// \param e é o estado do tabuleiro
/// \param filename é o nome do ficheiro
void ler (ESTADO *e, char *filename);

#endif //RASTROS_IO_H
