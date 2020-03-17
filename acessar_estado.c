#include "dados.h"

int obter_casa (ESTADO *e, int row, int col) {
    if ((*e).tab[row][col] == VAZIO) return VAZIO;
    else if ((*e).tab[row][col] == PRETA) return PRETA;
    else if ((*e).tab[row][col] == BRANCA) return BRANCA;
}

int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info){
    if (jogador==1)
        if (info == COLUNA) return (*e).jogadas[jogada].jogador1.coluna;
        else return (*e).jogadas[jogada].jogador1.linha;
    else
        if (info == COLUNA) return (*e).jogadas[jogada].jogador2.coluna;
        else return (*e).jogadas[jogada].jogador2.linha;
}

int JogadorAtual (ESTADO *e) {
    if ((*e).jogador_atual == 1) return 1;
    else return 2;
}

int NumJogadas(ESTADO *e){
    int q = (*e).num_jogadas;
    return q;
}