#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H
#include <stdio.h>
#include "Camadas/dados/dados.h"

void imprimir_tabuleiro(ESTADO *e, FILE *file);
void prompt(ESTADO *e, int num_comandos);
int interpretador(ESTADO *e, int num_comandos, int state);
void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2);
void imprime_movs2(FILE *file, int i, char c1, char r1);

#endif //RASTROS_INTERFACE_H
