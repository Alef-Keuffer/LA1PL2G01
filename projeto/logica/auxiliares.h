/// @file auxiliares.h
/// @brief Contém comentários para documentação e declarações das funções em auxiliares.c

#ifndef RASTROS_AUXILIARES_H
#define RASTROS_AUXILIARES_H
#include <math.h>
#include "Camadas/dados/dados.h"
#include "Camadas/dados/modificar_estado.h"
#include "Camadas/dados/acessar_estado.h"
#include "logica.h"

/// Recebe uma string e lê cada caractere, para armazenar no tab.
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \param linha é o número da linha lida
/// \param line é a linha lida
void ler_linha(ESTADO *e, int linha, const char *line);

/// Lê uma jogada, para armazenar na lista de jogadas.
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \param jog é a jogada lida
/// \param numjog é o número da jogada
void ler_jogada(ESTADO *e, JOGADA jog, int numjog);

/// Lê as restantes informações para serem armazenadas (número de jogadas, jogador atual e última jogada).
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \param jogadas é o número de jogadas individuais lidas
/// \param c é a última jogada lida
void ler_restante(ESTADO *e, int jogadas, COORDENADA c);

/// Converte uma coordenada em um número inteiro.
/// \ingroup sub2Alpha2
/// \param c é a coordenada a ser convertida
/// \return o inteiro igual a 10*c.linha + c.coluna
int coord_to_int(COORDENADA c);

/// Converte um número inteiro em uma coordenada.
/// \ingroup sub2Alpha2
/// \param x é o número a ser convertido
/// \return a coordenada correspondente
COORDENADA int_to_coord(int x);

/// Avalia a vitória em relação ao jogador atual.
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \return 1 se o jogador atual é o ganhador; -1 se o jogador atual é o perdedor; 0 se o jogo ainda não acabou.
int avaliar_vitoria(ESTADO *e);

/// Constroi um array com todas as jogadas válidas possíveis no atual momento.
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \param c é a última jogada
/// \param moveList é o array onde serão colocadas as jogadas possíveis
/// \return o número total de jogadas válidas possíveis
int array_jogadaspossiveis(ESTADO *e, COORDENADA c, COORDENADA moveList[]);

/// Procura dentro do array dado a coordenada mais próxima à casa final do jogador atual.
/// \ingroup sub2Alpha2
/// \param e é o estado do tabuleiro
/// \param moveList é o array de jogadas possíveis
/// \param moveCount é o tamanho do array
/// \return a coordenada mais próxima à casa final do jogador atual
COORDENADA maisproximaFim(ESTADO *e, COORDENADA moveList[], int moveCount);

#endif //RASTROS_AUXILIARES_H
