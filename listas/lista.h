#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024


typedef struct nodo{
    void *valor;
    struct nodo *proximo;
}NODO, *LISTA;

LISTA criar_lista();
LISTA insere_cabeca(LISTA L, void *valor);
void *devolve_cabeca(LISTA L);
LISTA proximo(LISTA L);
LISTA remove_cabeca(LISTA L);
int lista_esta_vazia(LISTA L);

#endif //LISTA_LISTA_H
