#include "dados.h"

#ifndef MODIFICAR_ESTADO_H
#define MODIFICAR_ESTADO_H

/// Coloca a peça branca na casa jogada e preta na posição anterior.
/// \ingroup subAlpha1
/// \param e é o estado do tabuleiro.
/// \param c é a coordenada do movimento realizado.
void atualizar_tab(ESTADO *e, COORDENADA c);

/// Atualiza a última jogada.
/// \ingroup subAlpha1
/// Coloca as coordenadas do movimento feito em (*e).ultima_jogada.
/// \param e é o estado do tabuleiro.
/// \param c é a coordenada do movimento realizado.
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c);

/// Atualiza o contador de jogadas.
/// \ingroup subAlpha1
/// Após movimento de jogador 2, soma-se 1 à (*e)_num_jogadas
/// \param e é o estado do tabuleiro.
/// \param c é a coordenada do movimento realizado.
void atualizar_num_jogadas(ESTADO *e);

/// Atualiza o jogador atual.
/// \ingroup subAlpha1
/// Após movimento de um jogador, coloca-se o outro jogador em (*e).jogador_atual
/// \param e é o estado do tabuleiro.
void atualizar_jogador_atual(ESTADO *e);

/// Atualiza a lista de jogadas.
/// \ingroup subAlpha1
/// Após movimento de jogador, as coordenadas do movimento são salvas.
/// \param e é o estado do tabuleiro.
/// \param c é a coordenada do movimento realizado.
void atualizar_jogadas (ESTADO *e, COORDENADA c);

#endif //MODIFICAR_ESTADO_H
