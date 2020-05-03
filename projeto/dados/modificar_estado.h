/// @file modificar_estado.h
/// @brief Contém a declaraão das funções em modificar_estado.c e comentários para documentação sobre elas.

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

/// Deve fazer as casas de um tabuleiro serem vazios baseado-se numa jogada.
/// @ingroup subAlpha1
/// \param e é o estado do tabuleiro
/// \param num é o número da jogada de onde as casas a serem limpas são determinadas
void limpar_casas(ESTADO *e, int num);

/// Coloca uma peça branca em uma coordenada do tabuleiro.
/// @ingroup subAlpha1
/// É utilizada em funções que voltam jogada no tabuleiro.
/// \param e é o estado do tabuleiro
/// \param c é a coordenada em que será colocada a peça branca.
void colocar_branca(ESTADO *e, COORDENADA c);

/// Usanda na leitura de ficheiros, atualiza o número de jogadas para ser igual ao do ficheiro lido.
/// @ingroup subAlpha1
/// \param e é o estado do tabuleiro
/// \param num é o número de movimentos feitos no ficheiro
void novo_num_jogadas(ESTADO *e, int num);

/// Faz a casa da última jogada ser vazia
/// @ingroup subAlpha1
/// \param e é o estado do tabuleiro
void branca_para_vazia(ESTADO *e);

/// Faz a última jogada ser uma jogada antes da jogada atual
/// @ingroup subAlpha1
/// Usada para desfazer uma jogada
/// \param e é o estado do tabuleiro
void nova_ultjogada(ESTADO *e);

/// Se o jogador atual for o 1 diminui em 1 o número de jogadas
/// @ingroup subAlpha1
/// Usada para desfazer uma jogada
/// \param e é o estado do tabuleiro
void modificar_numjogadas(ESTADO *e);

#endif //MODIFICAR_ESTADO_H
