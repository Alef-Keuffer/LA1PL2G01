#include "Camadas/dados/dados.h"
#include "Camadas/dados/acessar_estado.h"
#include <stdio.h>
#include "Camadas/dados/modificar_estado.h"
#include "Camadas/logica/logica.h"
#include "Camadas/interface/interface.h"

void gr (ESTADO *e, char *file_path) {
    FILE * fPtr;
    fPtr = fopen(file_path, "w");
    imprimir_tabuleiro(e, fPtr);
    putc('\n', fPtr);
    movs(e, fPtr);
    fclose(fPtr);
}

void ler(ESTADO *e, char *filename){
    FILE* file = fopen(filename, "r");
    if(file == NULL) return;
    char line[256], jog1[256], jog2[256];
    int i, num_jog, jogadas = 0;
    COORDENADA c = {4,4};

    for (i=0; fgets(line, sizeof(line), file); i++){
        if (i < 8) {
            armazenar_linha(e, i, line);
        }
        else if (i>=8  &&  sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 3) {
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {jog2[0] - 'a', jog2[1] - '1'};
            JOGADA j = {c1, c2};
            armazenar_jogada(e, j, num_jog - 1);
            jogadas += 2;
            c = c2;
        }
        else if (i>=8 && sscanf(line, "%d: %s %s", &num_jog, jog1, jog2) == 2){
            COORDENADA c1 = {jog1[0] - 'a', jog1[1] - '1'};
            COORDENADA c2 = {-1, 1};
            JOGADA j = {c1, c2};
            armazenar_jogada(e, j, num_jog - 1);
            jogadas++;
            c = c1;
        }
    }
    novo_num_jogadas(e, jogadas);
    armazenar_jogador(e, jogadas);
    atualizar_ultima_jogada(e, c);
    fclose(file);
}
