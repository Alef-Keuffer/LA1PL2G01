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
/// \return o npumero do jogador no momento em que a função foi executada
int JogadorAtual (ESTADO *e);

///
/// \ingroup subAlpha2
/// \param e
/// \param jogada
/// \param jogador
/// \param info
/// \return
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);

/// Obtem número de jogadas feitas até o momento da execução da função
/// \ingroup subAlpha2
/// \param e é o estado do tabuleiro
/// \return o número de jogadas do tabuleiro e
int NumJogadas(ESTADO *e);

///
/// \ingroup subAlpha2
/// \param e
/// \return
COORDENADA obter_ultimajogada(ESTADO *e);

///
/// \ingroup subAlpha2
/// \param e
/// \param jogada
/// \param jogador
/// \return
COORDENADA obter_coordenada(ESTADO *e, int jogada, int jogador);

#endif //RASTROS_C_ACESSAR_ESTADO_H
