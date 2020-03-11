#include <stdio.h>
#include "modificar_estado.h"
#include "dados.h"

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %c %d\n", c.coluna+'a', c.linha+1);
    atualizar_tab(e, c);
    atualizar_ultima_jogada(e, c);
    atualizar_jogadas(e, c);
    atualizar_num_jogadas(e);
    atualizar_jogador_atual(e);
    return 1;
}
