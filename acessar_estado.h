#ifndef RASTROS_C_ACESSAR_ESTADO_H
#define RASTROS_C_ACESSAR_ESTADO_H

int obter_casa (ESTADO *e, int row, int col);
int JogadorAtual (ESTADO *e);
int obter_subcoordenadas (ESTADO *e, int jogada, int jogador, int info);
int NumJogadas(ESTADO *e);
#endif //RASTROS_C_ACESSAR_ESTADO_H
