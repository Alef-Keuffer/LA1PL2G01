/// @defgroup groupAlpha1 Interface
/// @defgroup sub1Alpha1 Inteface
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
void mensagem_fimdejogo(ESTADO *e);
int interpretador(ESTADO *e, int num_comandos, int state);
void imprimir_char(int c, FILE *file);
void imprime_movs1(FILE *file, int i, int c1, int r1, int c2, int r2);
void imprime_movs2(FILE *file, int i, int c1, int r1);

#endif //RASTROS_INTERFACE_H
