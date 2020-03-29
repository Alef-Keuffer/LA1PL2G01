#include <stdio.h>
#include "dados.h"
#include "acessar_estado.h"
#include "modificar_estado.h"

void gr (ESTADO *e, char *file_path) {
    FILE * fPtr;
    fPtr = fopen(file_path, "w");
    for (int row = 7; row >=0; row--) {
        for (int col = 0; col < 8; col++)
            if (row == 7 && col == 7) fprintf(fPtr, "2");
            else if (row == 0 && col == 0) fprintf(fPtr, "1");
            else putc(obter_casa(e, row, col), fPtr);
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

void ler(ESTADO *e, char *filename){
    FILE* file = fopen(filename, "r");
    char line[256], jog1[256], jog2[256];
    int i, num_jog, jogadas = 0;

    for (i=0; fgets(line, sizeof(line), file); i++){
        if (i < 8) {
            armazenar_linha(e, i, line);
        }
        else if (i>=8  &&  sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 3) {
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {jog2[0] - 'a', jog2[1] - '1'};
            JOGADA j = {c1, c2};
            armazenar_jogada(e, j, num_jog);
            jogadas += 2;
        }
        else if (i>=8 && sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 2){
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {-1, 1};
            JOGADA j = {c1, c2};
            armazenar_jogada(e, j, num_jog);
            jogadas++;
            armazenar_ultima_jogada(e, c1);
        }
    }
    armazenar_jogador(e, jogadas);
    fclose(file);
}
