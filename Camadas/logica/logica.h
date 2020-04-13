#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include "Camadas/dados/dados.h"

int jogar(ESTADO *e, COORDENADA c);
int jogada_valida(ESTADO *e, COORDENADA c);
int fim_de_jogo(ESTADO *e);
void pos(ESTADO *e, int position, int state);

#endif //RASTROS_LOGICA_H
