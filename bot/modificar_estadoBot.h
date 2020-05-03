/// @file modificar_estadoBot.h
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#ifndef RASTROS_MODIFICAR_ESTADO_H
#define RASTROS_MODIFICAR_ESTADO_H
#include "dados.h"

/// @ingroup ModificarEstado
void atualizar_tab(ESTADO *e, COORDENADA c);

/// @ingroup ModificarEstado
void atualizar_ultima_jogada(ESTADO *e, COORDENADA c);

/// @ingroup ModificarEstado
void atualizar_num_jogadas(ESTADO *e);

/// @ingroup ModificarEstado
void atualizar_jogador_atual(ESTADO *e);

/// @ingroup ModificarEstado
void atualizar_jogadas (ESTADO *e, COORDENADA c);

/// @ingroup ModificarEstado
void armazenar_casa(ESTADO *e, int row, int col, char casa);

/// @ingroup ModificarEstado
void armazenar_jogada(ESTADO *e, JOGADA jog, int num_jog);

/// @ingroup ModificarEstado
void armazenar_jogador(ESTADO *e, int num_jogadas);

/// @ingroup ModificarEstado
void colocar_branca(ESTADO *e, COORDENADA c);

/// @ingroup ModificarEstado
void novo_num_jogadas(ESTADO *e, int num);

/// @ingroup ModificarEstado
void branca_para_vazia(ESTADO *e);

/// @ingroup ModificarEstado
void nova_ultjogada(ESTADO *e);

/// @ingroup ModificarEstado
void modificar_numjogadas(ESTADO *e);

#endif //RASTROS_MODIFICAR_ESTADO_H
