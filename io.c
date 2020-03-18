#include "dados.h"
#include "acessar_estado.h"
#include <stdio.h>
#include "logica.h"
#include "interface.h"

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
    putc('\n', fPtr);
    int i, a;
    if (JogadorAtual(e) == 1) for (a=0, i=1; a<NumJogadas(e); i++, a++) fprintf(fPtr, "%02d: %c%c %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1', obter_subcoordenadas(e, a, 2, COLUNA) + 'a', obter_subcoordenadas(e, a, 2, LINHA) + '1');
    else{
        for (a=0, i=1; a<NumJogadas(e); i++, a++) fprintf(fPtr, "%02d: %c%c %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1', obter_subcoordenadas(e, a, 2, COLUNA) + 'a', obter_subcoordenadas(e, a, 2, LINHA) + '1');
        fprintf (fPtr, "%02d: %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1');
    }
    fclose(fPtr);
}

void ler(char *filename){
    FILE* file = fopen(filename, "r");
    char line[256];
    int i, num_comandos = 0;
    ESTADO *e = inicializar_estado();

    for (i=0; fgets(line, sizeof(line), file); i++)
        if (i>=9  &&  line[6] != '\n') {
            COORDENADA coord1 = {line[4] - 'a', line[5] - '1'};
            COORDENADA coord2 = {line[7] - 'a', line[8] - '1'};
            jogar(e, coord1);
            jogar(e, coord2);
        }
        else if (i>=9){
            COORDENADA coord1 = {line[4] - 'a', line[5] - '1'};
            jogar(e, coord1);
        }
    fclose(file);
    interpretador(e, num_comandos);
}
