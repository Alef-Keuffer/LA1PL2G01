/// @file auxiliares.c
/// @brief Contém definições de funções pequenas usadas tanto em logica.c como em io.c

#include "auxiliares.h"

void ler_linha(ESTADO *e, int linha, const char *line){
    int i;
    int row = abs(linha - 7);
    for(i = 0; i < 8; i++)
        armazenar_casa(e, row, i, line[i]);
}

void ler_jogada(ESTADO *e, JOGADA jog, int numjog){
    armazenar_jogada(e, jog, numjog);
}

void ler_restante(ESTADO *e, int jogadas, COORDENADA c){
    novo_num_jogadas(e, jogadas);
    armazenar_jogador(e, jogadas);
    atualizar_ultima_jogada(e, c);
}

int coord_to_int(COORDENADA c){
    int x;
    x = c.linha * 10 + c.coluna;
    return x;
}

COORDENADA int_to_coord(int x){
    COORDENADA c;
    c.linha = x/10;
    c.coluna = x % 10;
    return c;
}

int avaliar_vitoria(ESTADO *e){
    int res = 0;
    if(JogadorAtual(e) == fim_de_jogo(e)) res = 1;
    else if(fim_de_jogo(e) != 0) res = -1;
    return res;
}

int array_jogadaspossiveis(ESTADO *e, COORDENADA c, COORDENADA moveList[]){
    int i, j, moveCount = 0;
    for(i = -1; i < 2; i++){
        for(j = -1; j < 2; j++){
            int row = c.linha + i;
            int col = c.coluna + j;
            if(row >= 0 && row <= 7 && col >= 0 && col <= 7 && (obter_casa(e, row, col) == VAZIO || obter_casa(e, row, col) == UM || obter_casa(e, row, col) == DOIS)) {
                moveList[moveCount].linha = row;
                moveList[moveCount].coluna = col;
                moveCount++;
            }
        }
    }
    return moveCount;
}

COORDENADA maisproximaFim(ESTADO *e, COORDENADA moveList[], int moveCount){
    int index, dist, distMin = 20;
    COORDENADA move, bestMove, fim1 = {0, 0}, fim2 = {7, 7};
    for(index = 0; index < moveCount; index++){
        move = moveList[index];
        if(JogadorAtual(e) == 1) dist = abs(move.linha - fim1.linha) + abs(move.coluna - fim1.coluna);
        else dist = abs(move.linha - fim2.linha) + abs(move.coluna - fim2.coluna);
        if(dist <= distMin){
            distMin = dist;
            bestMove = move;
        }
    }
    return bestMove;
}