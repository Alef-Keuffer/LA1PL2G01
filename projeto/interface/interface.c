/// @file interface.c
/// @brief Contém a definição de funções de interação direta com o usuário pela interface.
///
/// Funções que intepretam comandos e chamam outras funções na camada de lógica e imprimem texto no ecrã.

#include "interface.h"

#define BUF_SIZE 1024

void imprimir_prompt(int num_comandos, int jog, int num){
    printf("# %02d PL%d (%d)>", num_comandos, jog, num);
}

void mensagem_fimdejogo(ESTADO *e){
    if(fim_de_jogo(e)) printf("Fim de jogo! O jogador %d venceu.\n", fim_de_jogo(e));
}

int interpretador(ESTADO *e, int num_comandos, int state){
    char linha[BUF_SIZE], filename[BUF_SIZE], command[5];
    char col[2], lin[2];
    int position;

    mensagem_fimdejogo(e);
    prompt(e, num_comandos);
    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(!fim_de_jogo(e) && strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2){
        COORDENADA coord = {*col - 'a', *lin - '1'};
        if(jogada_valida(e, coord)){
            jogar(e, coord);
            printf("jogar %c %c\n", coord.coluna +'a', coord.linha +'1');
            mostrar_tabuleiro(e, NULL);
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
        mostrar_tabuleiro(e, NULL);
        state = 1;
    }
    if(!fim_de_jogo(e) && strlen(linha) == 4 && sscanf(linha, "%*[j]%*[o]%*[g]%c", command) == 1){
        jog(e);
        mostrar_tabuleiro(e, NULL);
    }
    if(!fim_de_jogo(e) && strlen(linha) == 5 && sscanf(linha, "%*[j]%*[o]%*[g]%*[2]%c", command) == 1){
        jog2(e);
        mostrar_tabuleiro(e, NULL);
    }
    num_comandos++;
    return interpretador(e, num_comandos, state);
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
