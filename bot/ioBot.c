/// @file ioBot.c
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#include "ioBot.h"

void gr (ESTADO *e, char *file_path) {
    FILE * fPtr;
    fPtr = fopen(file_path, "w");
    mostrar_tabuleiro(e, fPtr);
    putc('\n', fPtr);
    movs(e, fPtr);
    fclose(fPtr);
}

void ler(ESTADO *e, char *filename){
    FILE* file = fopen(filename, "r");
    char line[256], jog1[256], jog2[256];
    int i, num_jog, jogadas = 0;
    COORDENADA c = {4,4};

    for (i=0; fgets(line, sizeof(line), file); i++){
        if (i < 8) {
            ler_linha(e, i, line);
        }
        else if (i>=8  &&  sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 3) {
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {jog2[0] - 'a', jog2[1] - '1'};
            JOGADA j = {c1, c2};
            ler_jogada(e, j, num_jog - 1);
            jogadas += 2;
            c = c2;
        }
        else if (i>=8 && sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 2){
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {-1, 1};
            JOGADA j = {c1, c2};
            ler_jogada(e, j, num_jog - 1);
            jogadas++;
            c = c1;
        }
    }
    ler_restante(e, jogadas, c);
    fclose(file);
}