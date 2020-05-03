/// @file auxiliaresBot.h
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#ifndef BOTRASTROS_AUXILIARES_H
#define BOTRASTROS_AUXILIARES_H
#include <math.h>
#include <stdlib.h>
#include "dados.h"
#include "modificar_estadoBot.h"
#include "acessar_estadoBot.h"
#include "logicaBot.h"

/// @ingroup ModuloAuxiliares
void ler_linha(ESTADO *e, int linha, const char *line);

/// @ingroup ModuloAuxiliares
void ler_jogada(ESTADO *e, JOGADA jog, int numjog);

/// @ingroup ModuloAuxiliares
void ler_restante(ESTADO *e, int jogadas, COORDENADA c);

/// @ingroup ModuloAuxiliares
int coord_to_int(COORDENADA c);

/// @ingroup ModuloAuxiliares
COORDENADA int_to_coord(int x);

/// @ingroup ModuloAuxiliares
int avaliar_vitoria(ESTADO *e);

/// @ingroup ModuloAuxiliares
int array_jogadaspossiveis(ESTADO *e, COORDENADA c, COORDENADA moveList[]);

/// @ingroup ModuloAuxiliares
COORDENADA maisproximaFim(ESTADO *e, COORDENADA moveList[], int moveCount);

#endif //BOTRASTROS_AUXILIARES_H
