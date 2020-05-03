/// @file main.c
/// @brief Contém a função main() que inicia o programa.

/// @defgroup camadas Camadas

#include "Camadas/dados/dados.h"
#include "Camadas/interface/interface.h"
#include <Camadas/testes/test_simple_commands.h>

/// Essa função começa o jogo.
///
/// Realiza teste antes do programa começar chaman do test_simple_commands(). Depois determina o estado de alguns parâmentros para o início do jogo e chama o interpretador().
/// \return
int main() {
    test_simple_commands();
    int num_comandos = 0, state = 0;
    ESTADO *e = inicializar_estado();
    interpretador(e, num_comandos, state);
    return 0;
}
