#ifndef RASTROS_IO_H
#define RASTROS_IO_H
#include <stdio.h>
#include "dados.h"
#include "logicaBot.h"
#include "auxiliaresBot.h"

/// @ingroup CamadaIO
void gr(ESTADO *e, char *file_path);

/// @ingroup CamadaIO
void ler(ESTADO *e, char *filename);

#endif //RASTROS_IO_H
