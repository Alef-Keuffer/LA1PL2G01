#include "dados.h"

int obter_casa (ESTADO *e, int row, int col) {
    if ((*e).tab[row][col] == VAZIO) return VAZIO;
    else if ((*e).tab[row][col] == PRETA) return PRETA;
    else if ((*e).tab[row][col] == BRANCA) return BRANCA;
}