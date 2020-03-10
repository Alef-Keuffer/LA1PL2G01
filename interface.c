#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"
#include "logica.h"

#define BUF_SIZE 1024
char movimentos[BUF_SIZE];
char input[BUF_SIZE];
int i=1;

void interface() {

    fgets (input, BUF_SIZE, stdin);

    if (isdigit(input[1])) jogar(input[0], input[1]);
    else if (strncmp(input, "gr", 2) ==0) printf ("gr\n");
    else if (strncmp(input, "ler", 3) ==0) printf ("ler\n");
    else if (strncmp(input, "movs", 3) ==0) printf("movs\n");
    else if (strncmp(input, "jog", 3) ==0) printf ("jog\n");
    else if (strncmp(input, "pos", 3) ==0) printf ("pos\n");
    else if (input[0] == 'Q') exit(0);
    else printf("Comando desconhecido\n");
    return interface();
}

// Função que deve ser completada e colocada na camada de interface
void mostrar_tabuleiro(ESTADO *e) {
    for (int row = (*e).tamanho_tabuleiro; row > 0; --row)
        for (int col = 1; col <= (*e).tamanho_tabuleiro; ++col)
            if (row == 8 && col == 8) putchar('2');
            else if (row == 1 && col == 1) putchar('1');
            else if ((*e).tab[row-1][col-1] == VAZIO) putchar('.');
            else if ((*e).tab[row-1][col-1] == PRETA) putchar('#');
            else if ((*e).tab[row-1][col-1] == BRANCA) putchar('*');
            else exit(0); //Nao sei se tem uma situação que não previ
}
