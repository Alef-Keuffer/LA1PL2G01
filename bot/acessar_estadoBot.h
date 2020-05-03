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

/// @ingroup CamadaAcessarEstado
int obter_casa (ESTADO *e, int row, int col);

/// @ingroup CamadaAcessarEstado
int JogadorAtual (ESTADO *e);

/// @ingroup CamadaAcessarEstado
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);

/// @ingroup CamadaAcessarEstado
int NumJogadas(ESTADO *e);

/// @ingroup CamadaAcessarEstado
COORDENADA obter_ultimajogada(ESTADO *e);

#endif //RASTROS_ACESSAR_ESTADO_H
