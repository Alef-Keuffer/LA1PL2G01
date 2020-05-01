/// @defgroup groupAlpha2 Lógica
/// @defgroup sub1Alpha2 Lógica
/// @ingroup groupAlpha2
/// @defgroup sub2Alpha2 Auxiliares
/// @ingroup groupAlpha2

#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Camadas/dados/modificar_estado.h"
#include "Camadas/dados/dados.h"
#include "Camadas/dados/acessar_estado.h"
#include "Camadas/interface/interface.h"
#include "Camadas/interface/io.h"
#include "auxiliares.h"

/// É realizada quando uma coordenada é colocada no prompt e enter é pressionado.
/// \ingroup sub1Alpha2
/// Primeiro a função atualiza a casa, ou seja, faz a casa da peça ser PRETA e faz a casa da coordenada inserida ser BRANCA. Depois atualiza a última jogada para ser a coordenada inserida. Após isso, salva a coordenada inserida no histórico de jogadas do jogador que inseriu a coordenada. Em seguida incrementa o número de jogadas. Finalmente, atualiza o jogador atual, ou seja, determina o jogador atual para 1 ou para 2.
/// \param e é o estado do tabuleiro
/// \param c é a coordenada que foi inserida
void jogar(ESTADO *e, COORDENADA c);

/// Avalia se a coordenada recebida corresponde a um movimento válido.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro.
/// \param c é a coordenada que corresponde a um movimento.
/// \return é 1 ou 0 dependendo se a coordenada recebida for válida ou não
int jogada_valida(ESTADO *e, COORDENADA c);

/// Essa função é usada para imprimir o tabuleiro, seja no ecrã ou em um fiheiro para ser salvo.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param file é o que permite determinar se estamos imprimindo para o ecrã ou para um ficheito. Se for NULL é para o ecrã. Se for um file pointer é para um ficheiro.
void mostrar_tabuleiro(ESTADO *e, FILE *file);


void prompt(ESTADO *e, int num_comandos);
int fim_de_jogo(ESTADO *e);
void pos(ESTADO *e, int position, int state);
void movs(ESTADO *e, FILE *file);
int desfazer_ultjogada(ESTADO *e);
int minMax(ESTADO *e, int profundidade);
COORDENADA randomJog(ESTADO *e);
void jog(ESTADO *e);
void jog2(ESTADO *e);

#endif //RASTROS_LOGICA_H
