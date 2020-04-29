#ifndef RASTROS_IO_H
#define RASTROS_IO_H
#include <stdio.h>
#include "Camadas/dados/dados.h"
#include "Camadas/logica/logica.h"
#include "Camadas/logica/auxiliares.h"

void gr (ESTADO *e, char *file_path);
void ler (ESTADO *e, char *filename);

#endif //RASTROS_IO_H
