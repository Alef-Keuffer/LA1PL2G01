/// @defgroup groupAlpha2 Lógica
/// @defgroup sub1Alpha2 Lógica
/// @ingroup groupAlpha2
/// @defgroup sub2Alpha2 Auxiliares
/// @ingroup groupAlpha2

#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Camadas/dados/modificar_estado.h"
#include "Camadas/dados/dados.h"
#include "Camadas/dados/acessar_estado.h"
#include "Camadas/interface/interface.h"
#include "Camadas/interface/io.h"
#include "auxiliares.h"

int jogar(ESTADO *e, COORDENADA c);
int jogada_valida(ESTADO *e, COORDENADA c);
void mostrar_tabuleiro(ESTADO *e, FILE *file);
void prompt(ESTADO *e, int num_comandos);
int fim_de_jogo(ESTADO *e);
void pos(ESTADO *e, int position, int state);
void movs(ESTADO *e, FILE *file);
int desfazer_ultjogada(ESTADO *e);
int minMax(ESTADO *e, int profundidade);
COORDENADA randomJog(ESTADO *e);
void jog(ESTADO *e);
void jog2(ESTADO *e);

#endif //RASTROS_LOGICA_H
