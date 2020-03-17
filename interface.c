#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"
#include "logica.h"
#include "acessar_dados.h"
#include "io.h"

#define BUF_SIZE 1024
void mostrar_tabuleiro(ESTADO *e); void movs(ESTADO *e);

int interpretador(ESTADO *e){
    char linha[BUF_SIZE], filename[BUF_SIZE], command[5];
    char col[2], lin[2];

    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2){
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    if(strlen(linha) == 2 && sscanf(linha, "%[q]", col) == 1) exit(0);
    if(sscanf(linha, "%[gr] %s", col, filename) == 2) gr(e, filename);
    if(strlen(linha) == 5 && sscanf(linha, "%[movs]", command) == 1) movs(e);
    return interpretador(e);
}

// Função que deve ser completada e colocada na camada de interface
void mostrar_tabuleiro(ESTADO *e) {
    for (int row = 7; row >=0; row--) {
        for (int col = 0; col < 8; col++)
            if (row == 7 && col == 7) putchar('2');
            else if (row == 0 && col == 0) putchar('1');
            else if (obter_casa(e, row, col) == VAZIO) putchar('.');
            else if (obter_casa(e, row, col) == PRETA) putchar('#');
            else if (obter_casa(e, row, col) == BRANCA) putchar('*');
            else exit(0); //Nao sei se tem uma situação que não previ
        putchar('\n');
    }
}

void movs (ESTADO *e) {
    int a, i;
    if ((*e).jogador_atual == 1) for (a=0, i=1; a<(*e).num_jogadas; i++, a++) printf("%02d: %c%c %c%c\n", i, (*e).jogadas[a].jogador1.coluna +'a', (*e).jogadas[a].jogador1.linha +'1', (*e).jogadas[a].jogador2.coluna + 'a', (*e).jogadas[a].jogador2.linha + '1');
    else{
        for (a=0, i=1; a<(*e).num_jogadas; i++, a++) printf("%02d: %c%c %c%c\n", i, (*e).jogadas[a].jogador1.coluna +'a', (*e).jogadas[a].jogador1.linha +'1', (*e).jogadas[a].jogador2.coluna + 'a', (*e).jogadas[a].jogador2.linha + '1');
        printf ("%02d: %c%c\n", i, (*e).jogadas[a].jogador1.coluna +'a', (*e).jogadas[a].jogador1.linha +'1');
    }
}