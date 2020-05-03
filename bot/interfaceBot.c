/// @file interfaceBot.c
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#include "interfaceBot.h"

void mensagem_fimdejogo(ESTADO *e){
    if(fim_de_jogo(e)) printf("Fim de jogo! O jogador %d venceu.\n", fim_de_jogo(e));
}

void imprimir_char(int c, FILE *file){
    if(file == NULL) putchar(c);
    else putc(c, file);
}

void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2){
    if(file == NULL) fprintf(stdout, "%02d: %c%c %c%c\n", i, c1, r1, c2, r2);
    else fprintf(file, "%02d: %c%c %c%c\n", i, c1, r1, c2, r2);
}

void imprime_movs2(FILE *file, int i, int c1, int r1){
    if(file == NULL) fprintf(stdout, "%02d: %c%c\n", i, c1, r1);
    else fprintf(file, "%02d: %c%c\n", i, c1, r1);
}