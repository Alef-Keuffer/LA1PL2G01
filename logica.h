#ifndef LOGICA_H_
#define LOGICA_H_

#include "dados.h"

int jogar(ESTADO *e, COORDENADA c);
int jogada_valida(ESTADO *e, COORDENADA c);
int fim_de_jogo(ESTADO *e);
void pos(ESTADO *e, int position);

#endif
