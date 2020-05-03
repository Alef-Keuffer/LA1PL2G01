#include "Camadas/dados/dados.h"
#include "Camadas/interface/interface.h"
#include <Camadas/testes/test_simple_commands.h>
int main() {
    test_simple_commands();
    int num_comandos = 0, state = 0;
    ESTADO *e = inicializar_estado();
    interpretador(e, num_comandos, state);
    return 0;
}
