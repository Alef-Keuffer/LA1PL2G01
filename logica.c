#include <stdio.h>
#include <math.h>
#include "modificar_estado.h"
#include "dados.h"
#include "acessar_estado.h"

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
    atualizar_tab(e, c);
    atualizar_ultima_jogada(e, c);
    atualizar_jogadas(e, c);
    atualizar_num_jogadas(e);
    atualizar_jogador_atual(e);
    return 1;
}

int jogada_valida(ESTADO *e, COORDENADA c){
    int casa = obter_casa(e, c.linha, c.coluna), res;
    COORDENADA ultJog = obter_ultimajogada(e);
    int difLinha = abs(c.linha - ultJog.linha);
    int difColuna = abs(c.coluna - ultJog.coluna);

    if(casa == VAZIO && (difLinha == 0 || difLinha == 1) && (difColuna == 0 || difColuna == 1)) res = 1;
    else res = 0;

    return res;
}

int fim_de_jogo(ESTADO *e){
    int i, j, res, num_vazias = 0;
    int jog = JogadorAtual(e);
    COORDENADA c = obter_ultimajogada(e);

    for(i = -1; i < 2; i++){
        for(j = -1; j < 2; j++){
            if(obter_casa(e, c.linha + i, c.coluna + j) == VAZIO) num_vazias++;
        }
    }

    if((num_vazias == 0 && jog == 2) || (c.linha == 0 && c.coluna == 0)) res = 1;
    else if((num_vazias == 0 && jog == 1) || (c.linha == 7 && c.coluna == 7)) res = 2;
    else res = 0;

    return res;
}
