#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H
#include <stdio.h>
#include "dados.h"
#include "logicaBot.h"

void imprimir_char(int c, FILE *file);
void mensagem_fimdejogo(ESTADO *e);
void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2);
void imprime_movs2(FILE *file, int i, int c1, int r1);

#endif //RASTROS_INTERFACE_H
