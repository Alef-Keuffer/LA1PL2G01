#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#define BUF_SIZE 1024


// Cria uma lista vazia
LISTA criar_lista()
{
    return NULL;
}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor)
{
    LISTA r = malloc(sizeof(struct nodo));
    r->valor = valor;
    r->proximo = L
    return r;
}

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L)
{
    void *x = NULL;
    if(L != NULL) x = L->valor;
    return x;
}

// Devolve a cauda da lista
LISTA proximo(LISTA L)
{
    LISTA T = L;
    remove_cabeca(T);
    return T;
}

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L)
{
    if (L == NULL) return NULL;
    LISTA no = L;
    L = L->proximo;
    free(no);
    return L;
}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){
    return (L == NULL);
}

