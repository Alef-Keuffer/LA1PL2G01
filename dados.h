#ifndef DADOS_H_
#define DADOS_H_

// Estruturas de dados (devem ser colocadas no módulo correto da camada dos dados)
typedef enum {VAZIO, BRANCA, PRETA} CASA;
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
    int tamanho_tabuleiro;
    CASA tab[tamanho_tabuleiro][tamanho_tabuleiro];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

#endif
