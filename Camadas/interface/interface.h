#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H
#include "Camadas/dados/dados.h"

void mostrar_tabuleiro(ESTADO *e);
void prompt(ESTADO *e, int num_comandos);
int interpretador(ESTADO *e, int num_comandos, int state);
void movs (ESTADO *e);

#endif //RASTROS_INTERFACE_H
