/// @file acessar_estadoBot.h
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

/// @defgroup CamadaDados Dados
/// @ingroup Beta
/// @defgroup ModuloAcessarEstado Acessar Estado
/// @ingroup CamadaDados
/// @defgroup ModuloDados Dados
/// @ingroup CamadaDados
/// @defgroup ModificarEstado
/// @ingroup CamadaDados

#ifndef RASTROS_ACESSAR_ESTADO_H
#define RASTROS_ACESSAR_ESTADO_H
#include "dados.h"

/// @ingroup ModuloAcessarEstado
int obter_casa (ESTADO *e, int row, int col);

/// @ingroup ModuloAcessarEstado
int JogadorAtual (ESTADO *e);

/// @ingroup ModuloAcessarEstado
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);

/// @ingroup ModuloAcessarEstado
int NumJogadas(ESTADO *e);

/// @ingroup ModuloAcessarEstado
COORDENADA obter_ultimajogada(ESTADO *e);

#endif //RASTROS_ACESSAR_ESTADO_H
