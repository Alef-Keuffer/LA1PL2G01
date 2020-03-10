#include "dados.h"

void atualizar_tab(ESTADO *e, COORDENADA c){
    for (int row = 0; row < 8; row++)
        for (int col = 0; col <= 8; col++){
            if (row==(*e).ultima_jogada.coluna && col==(*e).ultima_jogada.coluna) (*e).tab[rol][col] = PRETA; 
            if (row==c.linha && col==c.coluna) (*e).tab[row][col] = BRANCA;
        }
}
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c){
    (*e).ultima_jogada = c;
}
void atualizar_num_jogadas(ESTADO *e){
    (*e).num_jogadas = (*e).num_jogadas +1
}
void atualizar_jogadas (ESTADO *e, COORDENADA c){
    if ((*e).jogador_atual == 1) (*e).jogadadas.jogador1[(*e).num_jogadas] = c;
    else (*e).jogadas_jogador2[(*e).num_jogadas] = c;
}
void atualizar_jogador_atual(ESTADO *e){
    if ((*e).jogador_atual == 1) (*e).jogador_atual = 2;
    else (*e).jogador_atual = 1;
}
