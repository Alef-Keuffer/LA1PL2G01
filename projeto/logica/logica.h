/// @file logica.h
/// @brief Contém comentários para documentação e declarações de funções em logica.h

/// @defgroup groupAlpha2 Lógica
/// @ingroup camadas
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

/// Essa função é usada para imprimir o tabuleiro, seja no ecrã ou em um ficheiro para ser salvo.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param file é o que permite determinar se estamos imprimindo para o ecrã ou para um ficheito. Se for NULL é para o ecrã. Se for um file pointer é para um ficheiro.
void mostrar_tabuleiro(ESTADO *e, FILE *file);

/// Função usada para gerar os argumentos a serem impressos como prompt.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param num_comandos é o número de comandos válidos
void prompt(ESTADO *e, int num_comandos);

/// Avalia os fins de jogos.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \return 1 se o jogador 1 venceu; 2 se o jogador 2 venceu; 0 se o jogo ainda não acabou
int fim_de_jogo(ESTADO *e);

/// Permite aceder jogadas anteriores do jogo.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param position é o número da jogada desejada
/// \param state é 0 se foi chamada após uma nova jogada e 1 se foi chamada após já ter sido chamada e não foi realizada nenhuma jogada no meio
void pos(ESTADO *e, int position, int state);

/// Lógica para imprimir a lista de jogadas, tanto no ecrã quanto num ficheiro.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param file é o que permite determinar se estamos imprimindo para o ecrã ou para um ficheito. Se for NULL é para o ecrã. Se for um file pointer é para um ficheiro.
void movs(ESTADO *e, FILE *file);

/// Desfaz a última jogada -- função auxiliar para o comando jog.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \return 1 se correu bem
int desfazer_ultjogada(ESTADO *e);

/// Lógica do MinMax, para realizar uma jogada sozinho. Prevê até 8 jogadas à frente.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \param profundidade é a atual profundidade da função, ou seja, quantas vezes a função já foi chamada recursivamente
/// \return o melhor resultado do galho quando profundidade > 0; uma coordenada em formato de inteiro quando profundidade == 0
int minMax(ESTADO *e, int profundidade);

/// Devolve uma coordenada aleatória dentre as jogadas possíveis.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
/// \return uma coordenada à sorte
COORDENADA randomJog(ESTADO *e);

/// Joga na coordenada devolvida pelo minMax.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
void jog(ESTADO *e);

/// Joga na coordenada devolvida pelo randomJog.
/// \ingroup sub1Alpha2
/// \param e é o estado do tabuleiro
void jog2(ESTADO *e);

#endif //RASTROS_LOGICA_H
