#include "dados.h"

void atualizar_tab(ESTADO *e, COORDENADA c){
    (*e).tab[(*e).ultima_jogada.linha][(*e).ultima_jogada.coluna] = PRETA;
    (*e).tab[c.linha][c.coluna] = BRANCA;
}
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c){
    (*e).ultima_jogada = c;
}
void atualizar_num_jogadas(ESTADO *e){
    if ((*e).jogador_atual == 2) (*e).num_jogadas = (*e).num_jogadas +1;
}
void atualizar_jogadas (ESTADO *e, COORDENADA c){
    if ((*e).jogador_atual == 1) (*e).jogadas[(*e).num_jogadas].jogador1 = c;
    else (*e).jogadas[(*e).num_jogadas].jogador2 = c;
}
void atualizar_jogador_atual(ESTADO *e){
    if ((*e).jogador_atual == 1) (*e).jogador_atual = 2;
    else (*e).jogador_atual = 1;
}
