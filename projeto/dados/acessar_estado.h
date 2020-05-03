/// @file acessar_estado.h
/// @brief Nesse aqurivo estão declaradas e comentadas para documentação as funções em acessar_estado.c

#ifndef RASTROS_C_ACESSAR_ESTADO_H
#define RASTROS_C_ACESSAR_ESTADO_H
#include "dados.h"

/// Obtêm a estado de uma casa
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \param row está no intervalo de 0 a 7 e corresponde as linhas do tabuleiro
/// \param col está no intervalo de 0 a 7 e corresponde as colunas do tabuleiro
/// \return o estado da casa (VAZIO, UM, DOIS, PRETA, BRANCA equivalente a '.', '1', '2', '#', '*')
int obter_casa (ESTADO *e, int row, int col);

/// Obtêm o número do jogador atual
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \return o número do jogador no momento em que a função foi executada
int JogadorAtual (ESTADO *e);

/// Obtem a coordenada de uma linha ou coluna.
/// \ingroup subAlpha2
/// Fornecendo o número da jogada e o número da jogado devolve a int da coluna ou linha depenendo se int info == COLUNA
/// \param e é o estado do tabuleiro
/// \param jogada é a jogada em questão
/// \param jogador é o número do jogador da qual a linha ou coluna está a ser requisatada
/// \param info determina se será a coluna ou linha que será devolvida.
/// \return coluna ou linha
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);

/// Obtem número de jogadas feitas até o momento da execução da função
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \return o número de jogadas do tabuleiro e
int NumJogadas(ESTADO *e);

/// Devolve a coordenada da última jogada salva no estado do tabuleiro.
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \return coordenada da última jogada
COORDENADA obter_ultimajogada(ESTADO *e);

/// Deve fornecer a coordenada do movimento de um jogador em uma jogada
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \param jogada especifica de qual jogada iremos buscar a coordenada
/// \param jogador especifica de qual jogador será requisatada a coordenada.
/// \return coordenada que o jogador 1 ou 2 fez em uma jogada x.
COORDENADA obter_coordenada(ESTADO *e, int jogada, int jogador);

#endif //RASTROS_C_ACESSAR_ESTADO_H
