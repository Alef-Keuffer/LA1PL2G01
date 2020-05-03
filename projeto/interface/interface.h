/// @file interface.h
/// @brief Contém comentários para documentação e declarações das funções em interface.c

/// @defgroup groupAlpha1 Interface
/// @ingroup camadas
/// @defgroup sub1Alpha1 Interface
/// @ingroup groupAlpha1
/// @defgroup sub2Alpha1 IO
/// @ingroup groupAlpha1

#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Camadas/dados/dados.h"
#include "Camadas/logica/logica.h"
#include "Camadas/interface/io.h"

/// Coloca no ecrã um prompt
/// \ingroup sub1Alpha1
/// O ecrã  contém o número de comandos que foram executados até o momento, o número do jogador atual e o número da jogada atual
/// \param num_comandos é um contador que para o número de comandos que foram realizados
/// \param jog é o contador para o número do jogador atual
/// \param num é o contador para o número da jogada atual
void imprimir_prompt(int num_comandos, int jog, int num);

/// Deve imprimir uma mensagem quando o jogo acaba
/// \ingroup sub1Alpha1
/// Além disso, a mesagem declara qual jogador venceu.
/// \param e é o estado do tabuleiro
void mensagem_fimdejogo(ESTADO *e);

/// Deve iniciar um interpretador de comandos.
/// \ingroup sub1Alpha1
/// Por meio de if scanf comparamos o input com os comandos programados.
/// \param e é o estado do tabuleiro em que os comandos executados serão executados.
/// \param num_comandos funciona como um contador para o número de comandos válidos executados.
/// \param state usada por pos para indicar se será gravado um ficheiropos ou se será lido esse ficheiro.
/// \return ...
int interpretador(ESTADO *e, int num_comandos, int state);

/// Imprime char em ficheiro ou no ecrã
/// @ingroup sub1Alpha1
/// Se o filepointer for NULL o char será impresso no ecrã.
/// \param c é o número que equivale ao chatacter desejado.
/// \param file é o ficheiro em que serã colocado o character (caso o filepointer !=NULL)
void imprimir_char(int c, FILE *file);

/// Imprime uma jogada completa, isso é, com as jogadas dos dois jogadores.
/// @ingroup sub1Alpha1
/// \param file se for NULL será para o ecrã, de outra forma será escrito em um ficheiro
/// \param i é o número da jogada
/// \param c1 é a coluna do movimento do jogador 1
/// \param r1 é a linha do movimento do jogador 1
/// \param c2 é a coluna do movimento do jogador 2
/// \param r2 é a linha do movimento do jogador 2
void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2);

/// Imprime uma jogada somente com o movimento do jogador 1
/// @ingroup sub1Alpha1
/// \param file se for NULL será para o ecrã, de outra forma será escrito em um ficheiro
/// \param i é o número da jogada
/// \param c1 é a coluna do movimento do jogador 1
/// \param r1 é a linha do movimento do jogador 1
void imprime_movs2(FILE *file, int i, int c1, int r1);

#endif //RASTROS_INTERFACE_H
