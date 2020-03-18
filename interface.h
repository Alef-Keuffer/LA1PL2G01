#ifndef INTERFACE_H_
#define INTERFACE_H_
#include "dados.h"

void mostrar_tabuleiro(ESTADO *e);
void prompt(ESTADO *e, int num_comandos);
int interpretador(ESTADO *e, int num_comandos);
void movs (ESTADO *e);

#endif
