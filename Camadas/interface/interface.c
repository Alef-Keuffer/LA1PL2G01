#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"
#include "logica.h"
#include "acessar_estado.h"
#include "io.h"

#define BUF_SIZE 1024
void mostrar_tabuleiro(ESTADO *e); void movs(ESTADO *e);

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
            mostrar_tabuleiro(e);
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
    if(strlen(linha) == 5 && sscanf(linha, "%*[m]%*[o]%*[v]%*[s]%c", command) == 1) movs(e);
    if(sscanf(linha, "%*[p]%*[o]%*[s] %d", &position) == 1) {
        pos(e, position, state);
        state = 1;
    }
    if(strlen(linha) == 4 && sscanf(linha, "%*[j]%*[o]%*[g]%c", command) == 1) jog(e);
    num_comandos++;
    return interpretador(e, num_comandos, state);
}

void mostrar_tabuleiro(ESTADO *e) {
    for (int row = 7; row >=0; row--) {
        for (int col = 0; col < 8; col++)
            putchar(obter_casa(e, row, col));
        putchar('\n');
    }
}

void movs (ESTADO *e) {
    int a, i;
    if (JogadorAtual(e) == 1)
        for (a=0, i=1; a<NumJogadas(e); i++, a++)
            printf("%02d: %c%c %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1', obter_subcoordenadas(e, a, 2, COLUNA) + 'a', obter_subcoordenadas(e, a, 2, LINHA) + '1');
    else{
        for (a=0, i=1; a<NumJogadas(e); i++, a++)  printf("%02d: %c%c %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1', obter_subcoordenadas(e, a, 2, COLUNA) + 'a', obter_subcoordenadas(e, a, 2, LINHA) + '1');
        printf ("%02d: %c%c\n", i, obter_subcoordenadas(e, a, 1, COLUNA) +'a', obter_subcoordenadas(e, a, 1, LINHA) +'1');
    }
}
