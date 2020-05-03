/// @file dados.c
/// @brief Contém a definição da função que inicializa o tabuleiro.

#include <stdlib.h>
#include "dados.h"

ESTADO *inicializar_estado(){
    int i, j;
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    e->jogador_atual = 1;
    e->num_jogadas = 0;
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            if(i == 4 && j == 4) e->tab[i][j] = BRANCA;
            else if(i == 7 && j == 7) e->tab[i][j] = DOIS;
            else if(i == 0 && j == 0) e->tab[i][j] = UM;
            else e->tab[i][j] = VAZIO;
        }
    }
    e->ultima_jogada.coluna = e->ultima_jogada.linha = 4;

    return e;
}
