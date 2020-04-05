#include <stdio.h>
#include <math.h>
#include "modificar_estado.h"
#include "dados.h"
#include "acessar_estado.h"
#include "interface.h"
#include "io.h"

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %c %d\n", c.coluna+'a', c.linha+1);
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

    res = (casa != PRETA && casa != BRANCA && (difLinha == 0 || difLinha == 1) && (difColuna == 0 || difColuna == 1));

    return res;
}

int fim_de_jogo(ESTADO *e){
    int i, j, res, num_vazias = 0;
    int jog = JogadorAtual(e);
    COORDENADA c = obter_ultimajogada(e);

    for(i = -1; i < 2; i++){
        for(j = -1; j < 2; j++){
            if(c.linha + i >= 0 && c.linha + i <= 7 && c.coluna + j >= 0 && c.coluna + j <= 7 && obter_casa(e, c.linha + i, c.coluna + j) != PRETA && obter_casa(e, c.linha + i, c.coluna + j) != BRANCA) num_vazias++;
        }
    }

    if((num_vazias == 0 && jog == 2) || (c.linha == 0 && c.coluna == 0)) res = 1;
    else if((num_vazias == 0 && jog == 1) || (c.linha == 7 && c.coluna == 7)) res = 2;
    else res = 0;

    return res;
}

void pos(ESTADO *e, int position, int state){
    int num;
    int i, ultimo = 2;
    COORDENADA ultjogada;

    if(state == 0) gr(e, "ficheiropos");
    else ler(e, "ficheiropos");

    num = NumJogadas(e);
    for(i = position; i <= num; i++){
        if(i < num || JogadorAtual(e) == 2) limpar_casas(e, i);
    }
    if(position == NumJogadas(e) + 1 && JogadorAtual(e) == 2) ultimo = 1;

    if(position == 0) ultjogada.linha = ultjogada.coluna = 4;
    else ultjogada = obter_coordenada(e, position - 1, ultimo);
    
    colocar_branca(e, ultjogada);
    atualizar_ultima_jogada(e, ultjogada);
    armazenar_jogador(e, ultimo);
    if(JogadorAtual(e) == 1) armazenar_num_jogadas(e, position);
    else armazenar_num_jogadas(e, position - 1);
    mostrar_tabuleiro(e);
}
