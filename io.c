#include "dados.h"
#include "acessar_dados.h"
#include <stdio.h>

void gr (ESTADO *e, char *file_path) {
    FILE * fPtr;
    fPtr = fopen(file_path, "w");
    for (int row = 7; row >=0; row--) {
        for (int col = 0; col < 8; col++)
            if (row == 7 && col == 7) fprintf(fPtr, "2");
            else if (row == 0 && col == 0) fprintf(fPtr, "1");
            else if (obter_casa(e, row, col) == VAZIO) putc('.', fPtr);
            else if (obter_casa(e, row, col) == PRETA) putc('#', fPtr);
            else if (obter_casa(e, row, col) == BRANCA) putc('*', fPtr);
        putc('\n', fPtr);
    }
    for (int a=0, i=1; a<(*e).num_jogadas; i++, a++)
        fprintf(fPtr, "\n%02d: %c%c %c%c", i, (*e).jogadas[a].jogador1.coluna +'a', (*e).jogadas[a].jogador1.linha +'1', (*e).jogadas[a].jogador2.coluna + 'a', (*e).jogadas[a].jogador2.linha + '1');
    fclose(fPtr);
}