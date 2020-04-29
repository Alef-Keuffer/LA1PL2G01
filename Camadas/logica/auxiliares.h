#ifndef RASTROS_AUXILIARES_H
#define RASTROS_AUXILIARES_H
#include <math.h>
#include "Camadas/dados/dados.h"
#include "Camadas/dados/modificar_estado.h"
#include "Camadas/dados/acessar_estado.h"
#include "logica.h"

void ler_linha(ESTADO *e, int linha, const char *line);
void ler_jogada(ESTADO *e, JOGADA jog, int numjog);
void ler_restante(ESTADO *e, int jogadas, COORDENADA c);
int coord_to_int(COORDENADA c);
COORDENADA int_to_coord(int x);
int avaliar_vitoria(ESTADO *e);
int array_jogadaspossiveis(ESTADO *e, COORDENADA c, COORDENADA moveList[]);
COORDENADA maisproximaFim(ESTADO *e, COORDENADA moveList[], int moveCount);

#endif //RASTROS_AUXILIARES_H
