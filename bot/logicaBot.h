/// @file logicaBot.h
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

/// @defgroup CamadaLogica Lógica
/// @ingroup Beta
/// @defgroup ModuloLogica Lógica
/// @ingroup CamadaLogica
/// @defgroup ModuloAuxiliares Auxiliares
/// @ingroup CamadaLogica

#ifndef RASTROS_LOGICA_H
#define RASTROS_LOGICA_H
#include <stdio.h>
#include "modificar_estadoBot.h"
#include "dados.h"
#include "acessar_estadoBot.h"
#include "interfaceBot.h"
#include "auxiliaresBot.h"

/// @ingroup ModuloLogica
int jogar(ESTADO *e, COORDENADA c);

/// @ingroup ModuloLogica
void mostrar_tabuleiro(ESTADO *e, FILE *file);

/// @ingroup ModuloLogica
int fim_de_jogo(ESTADO *e);

/// @ingroup ModuloLogica
void movs(ESTADO *e, FILE *file);

/// @ingroup ModuloLogica
int desfazer_ultjogada(ESTADO *e);

/// @ingroup ModuloLogica
int minMax(ESTADO *e, int profundidade);

/// @ingroup ModuloLogica
void jog(ESTADO *e);

#endif //RASTROS_LOGICA_H
