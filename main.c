#include "dados.h"
#include "interface.h"

int main() {
    int num_comandos = 0, state = 0;
    ESTADO *e = inicializar_estado();
    interpretador(e, num_comandos, state);
    return 0;
}
