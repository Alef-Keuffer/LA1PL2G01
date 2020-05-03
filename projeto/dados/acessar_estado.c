/// @file acessar_estado.c
/// @brief Contém as definições de funções que leem valores que estão na camada de dados.

#include "acessar_estado.h"

int obter_casa (ESTADO *e, int row, int col) {
    return (*e).tab[row][col];
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
    return (*e).jogador_atual;
}

int NumJogadas(ESTADO *e){
    return (*e).num_jogadas;
}

COORDENADA obter_ultimajogada(ESTADO *e){
    return e->ultima_jogada;
}

COORDENADA obter_coordenada(ESTADO *e, int jogada, int jogador){
    COORDENADA c;
    if(jogador == 1) c = (*e).jogadas[jogada].jogador1;
    else c = (*e).jogadas[jogada].jogador2;
    return c;
}
