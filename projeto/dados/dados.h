/// @file dados.h
/// @brief Contém as definições das estruturas de dados que serão usadas no programa.
///
/// Nesse aqurivo está declarada e comentada para documentação a função em dados.c

/// @defgroup groupAlpha Dados
/// @ingroup camadas
/// @defgroup subAlpha1 Modificar dados
/// @ingroup groupAlpha
/// @defgroup subAlpha2 Acessar dados
/// @ingroup groupAlpha
/// @defgroup subAlpha3 Dados
/// @ingroup groupAlpha

#ifndef DADOS_H_
#define DADOS_H_

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

/// Inicializa o tabuleiro
/// \ingroup subAlpha3
/// Cria o apontador "e" do tipo ESTADO. Determina que o jogador atual é o jogador 1. Determina que o número de jogadas é 0. Monta o tabuleiro determinando o estado (VAZIA, UM, DOIS, PRETA, BRANCA) de cada casa.
/// \return o apontador para um endereço de um estado
ESTADO *inicializar_estado();

#endif
