#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"
#include "logica.h"

#define BUF_SIZE 1024

int interpretador(ESTADO *e){
    char linha[BUF_SIZE];
    char col[2], lin[2];
    
    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2){
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;
}

// Função que deve ser completada e colocada na camada de interface
void mostrar_tabuleiro(ESTADO *e) {
    for (int row = 0; row < 8; row++)
        for (int col = 0; col < 8; col++)
            if (row == 7 && col == 7) putchar('2');
            else if (row == 0 && col == 0) putchar('1');
            else if ((*e).tab[row][col] == VAZIO) putchar('.');
            else if ((*e).tab[row][col] == PRETA) putchar('#');
            else if ((*e).tab[row][col] == BRANCA) putchar('*');
            else exit(0); //Nao sei se tem uma situação que não previ
}
