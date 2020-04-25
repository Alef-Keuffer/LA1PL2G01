#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Camadas/dados/dados.h"
#include "Camadas/logica/logica.h"
#include "Camadas/dados/acessar_estado.h"
#include "Camadas/logica/io.h"

#define BUF_SIZE 1024
void imprimir_tabuleiro(ESTADO *e, FILE *file);

void prompt(ESTADO *e, int num_comandos){
    int num = NumJogadas(e) + 1, jog = JogadorAtual(e);
    printf("# %02d PL%d (%d)>", num_comandos, jog, num);
}

int interpretador(ESTADO *e, int num_comandos, int state){
    char linha[BUF_SIZE], filename[BUF_SIZE], command[5];
    char col[2], lin[2], *str1, *str2, *str3;
    int position;

    if(fim_de_jogo(e)) printf("Fim de jogo! O jogador %d venceu.\n", fim_de_jogo(e));
    prompt(e, num_comandos);
    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(!fim_de_jogo(e) && strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2){
        COORDENADA coord = {*col - 'a', *lin - '1'};
        if(jogada_valida(e, coord)){
            jogar(e, coord);
            printf("jogar %c %c\n", coord.coluna +'a', coord.linha +'1');
            imprimir_tabuleiro(e, NULL);
            state = 0;
        }
        else{
            puts("Jogada invalida. Tente novamente.\n");
            num_comandos--;
        }
    }
    if(strlen(linha) == 2 && sscanf(linha, "%[Q]", col) == 1) exit(0);
    if(sscanf(linha, "%*[g]%*[r] %s", filename) == 1) gr(e, filename);
    if(sscanf(linha, "%*[l]%*[e]%*[r] %s", filename) == 1){
        ler(e, filename);
        state = 0;
    }
    if(strlen(linha) == 5 && sscanf(linha, "%*[m]%*[o]%*[v]%*[s]%c", command) == 1) movs(e, NULL);
    if(sscanf(linha, "%*[p]%*[o]%*[s] %d", &position) == 1) {
        pos(e, position, state);
        imprimir_tabuleiro(e, NULL);
        state = 1;
    }
    if(!fim_de_jogo(e) && strlen(linha) == 4 && sscanf(linha, "%*[j]%*[o]%*[g]%c", command) == 1){
        jog(e);
        imprimir_tabuleiro(e, NULL);
    }
    if(!fim_de_jogo(e) && strlen(linha) == 5 && sscanf(linha, "%*[j]%*[o]%*[g]%*[2]%c", command) == 1){
        jog2(e);
        imprimir_tabuleiro(e, NULL);
    }
    num_comandos++;
    return interpretador(e, num_comandos, state);
}

void imprimir_tabuleiro(ESTADO *e, FILE *file){
    for(int row = 7; row >=0; row--){
        for(int col = 0; col < 8; col++){
            if(file == NULL) putchar(obter_casa(e, row, col));
            else putc(obter_casa(e, row, col), file);
        }
        if(file == NULL) putchar('\n');
        else putc('\n', file);
    }
}

void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2){
    if(file == NULL) fprintf(stdout, "%02d: %c%c %c%c\n", i, c1, r1, c2, r2);
    else fprintf(file, "%02d: %c%c %c%c\n", i, c1, r1, c2, r2);
}

void imprime_movs2(FILE *file, int i, char c1, char r1){
    if(file == NULL) fprintf(stdout, "%02d: %c%c\n", i, c1, r1);
    else fprintf(file, "%02d: %c%c\n", i, c1, r1);
}
