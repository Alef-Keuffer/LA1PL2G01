#include "dados.h"

void atualizar_tab(ESTADO *e, COORDENADA c){
    for (int row = e.tamanho_tabuleiro; row > 0; --row)
        for (int col = 1; col <= e.tamanho_tabuleiro; ++col)
            if (row==c.linha && col==c.coluna) e.tab[row][col] = c;
}
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c){
    e.ultima_jogada = c;
}
void atualizar_num_jogadas(ESTADO *e){
    if ((*e).jogador_atual == 2) (*e).num_jogadas = (*e).num_jogadas +1;
}
void atualizar_jogador_atual(ESTADO *e){
    if (e.jogador_atual == 1) e.jogador_atual = 2;
    else e.jogador_atual = 1;
}
