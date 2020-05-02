#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include <stdio.h>
#include "modificar_estadoBot.h"
#include "dados.h"
#include "acessar_estadoBot.h"
#include "interfaceBot.h"
#include "auxiliaresBot.h"

int jogar(ESTADO *e, COORDENADA c);
void mostrar_tabuleiro(ESTADO *e, FILE *file);
int fim_de_jogo(ESTADO *e);
void movs(ESTADO *e, FILE *file);
int desfazer_ultjogada(ESTADO *e);
int minMax(ESTADO *e, int profundidade);
void jog(ESTADO *e);

#endif //RASTROS_LOGICA_H
