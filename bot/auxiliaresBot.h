#ifndef BOTRASTROS_AUXILIARES_H
#define BOTRASTROS_AUXILIARES_H
#include <math.h>
#include "dados.h"
#include "modificar_estadoBot.h"
#include "acessar_estadoBot.h"
#include "logicaBot.h"

void ler_linha(ESTADO *e, int linha, const char *line);
void ler_jogada(ESTADO *e, JOGADA jog, int numjog);
void ler_restante(ESTADO *e, int jogadas, COORDENADA c);
int coord_to_int(COORDENADA c);
COORDENADA int_to_coord(int x);
int avaliar_vitoria(ESTADO *e);
int array_jogadaspossiveis(ESTADO *e, COORDENADA c, COORDENADA moveList[]);
COORDENADA maisproximaFim(ESTADO *e, COORDENADA moveList[], int moveCount);

#endif //BOTRASTROS_AUXILIARES_H
