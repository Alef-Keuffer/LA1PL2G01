#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include "Camadas/dados/dados.h"

int jogar(ESTADO *e, COORDENADA c);
int jogada_valida(ESTADO *e, COORDENADA c);
int fim_de_jogo(ESTADO *e);
void pos(ESTADO *e, int position, int state);
int coord_to_int(COORDENADA c);
COORDENADA int_to_coord(int x);
int avaliar_vitoria(ESTADO *e);
int desfazer_ultjogada(ESTADO *e);
int minMax(ESTADO *e);
void jog(ESTADO *e);

#endif //RASTROS_LOGICA_H
