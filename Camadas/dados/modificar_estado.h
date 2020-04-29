#ifndef MODIFICAR_ESTADO_H
#define MODIFICAR_ESTADO_H

#include "dados.h"

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

/// Atualiza a casa do tabuleiro pela casa lida.
/// \ingroup subAlpha1
/// Após o comando ler ser invocado, as casas do tabuleiro são alteradas.
/// \param e é o estado do tabuleiro.
/// \param row é a linha.
/// \param col é a coluna.
/// \param casa é a casa lida.
void armazenar_casa(ESTADO *e, int row, int col, const char casa);

/// Armazena jogadas na lista de jogadas.
/// \ingroup subAlpha1
/// Após o comando ler ser invocado, as jogadas lidas são armazenadas na lista de jogadas.
/// \param e é o estado do tabuleiro.
/// \param jog é a jogada lida.
/// \param num_jog é o número da jogada.
void armazenar_jogada(ESTADO *e, JOGADA jog, int num_jog);

/// Armazena o último jogador.
/// \ingroup subAlpha1
/// Após o comando ler ser invocado, o último jogador é armazenado conforme com o que foi lido.
/// \param e é o estado do tabuleiro.
/// \param num_jogadas é o número de jogadas.
void armazenar_jogador(ESTADO *e, int num_jogadas);

/// Armazena o número de jogadas.
/// \ingroup subAlpha1
/// Após o comando ler ser invocado, o número de jogadas lido é armazenado.
/// \param e é o estado do tabuleiro.
/// \param num é o número da jogada.
void armazenar_num_jogadas(ESTADO *e, int num);

void limpar_casas(ESTADO *e, int num);
void colocar_branca(ESTADO *e, COORDENADA c);
void novo_num_jogadas(ESTADO *e, int num);
void branca_para_vazia(ESTADO *e);
void nova_ultjogada(ESTADO *e);
void modificar_numjogadas(ESTADO *e);

#endif //MODIFICAR_ESTADO_H
