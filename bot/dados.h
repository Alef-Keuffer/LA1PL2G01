/// @file dados.h
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.


#ifndef RASTROS_DADOS_H
#define RASTROS_DADOS_H

#define COLUNA 132
#define LINHA 133

typedef enum{
    UM = '1',
    DOIS = '2',
    VAZIO = '.',
    BRANCA = '*',
    PRETA = '#'
}CASA;

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
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

/// @ingroup ModuloDados
ESTADO *inicializar_estado();

#endif //RASTROS_DADOS_H