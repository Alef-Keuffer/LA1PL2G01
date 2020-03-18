#include "dados.h"
#include "interface.h"

int main() {
    int num_comandos = 0;
    ESTADO *e = inicializar_estado();
    interpretador(e, num_comandos);
    return 0;
}
