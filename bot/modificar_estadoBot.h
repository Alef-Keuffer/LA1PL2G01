#ifndef RASTROS_MODIFICAR_ESTADO_H
#define RASTROS_MODIFICAR_ESTADO_H
#include "dados.h"

void atualizar_tab(ESTADO *e, COORDENADA c);
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c);
void atualizar_num_jogadas(ESTADO *e);
void atualizar_jogador_atual(ESTADO *e);
void atualizar_jogadas (ESTADO *e, COORDENADA c);
void armazenar_casa(ESTADO *e, int row, int col, char casa);
void armazenar_jogada(ESTADO *e, JOGADA jog, int num_jog);
void armazenar_jogador(ESTADO *e, int num_jogadas);
void colocar_branca(ESTADO *e, COORDENADA c);
void novo_num_jogadas(ESTADO *e, int num);
void branca_para_vazia(ESTADO *e);
void nova_ultjogada(ESTADO *e);
void modificar_numjogadas(ESTADO *e);

#endif //RASTROS_MODIFICAR_ESTADO_H
