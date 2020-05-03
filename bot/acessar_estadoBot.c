/// @file acessar_estadoBot.c
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#include "acessar_estadoBot.h"

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