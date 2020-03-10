#include <stdio.h>
#include "modificar_estado.h"
#include "dados.h"
#include "interface.h"

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %c %d\n", c.coluna, c.linha);
    c.coluna = c.coluna -64;
    atualizar_tab(e, c);
    atualizar_ultima_jogada(e, c);
    if(e->jogador_atual == 2) atualizar_num_jogadas(e);
    atualizar_jogador_atual(e);
    mostrar_tabuleiro(e);
    return 1;
}
