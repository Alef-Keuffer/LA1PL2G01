#ifndef DADOS_H_
#define DADOS_H_

#define VAZIO 0
#define BRANCA 1
#define PRETA -1
#define COLUNA 132
#define LINHA 133

typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct {
    //int tamanho_tabuleiro;
    int tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

ESTADO *inicializar_estado();

#endif
