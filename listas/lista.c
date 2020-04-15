#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#define BUF_SIZE 1024


// Cria uma lista vazia
LISTA criar_lista()
{
    LISTA *L = (LISTA*) malloc(sizeof(LISTA));
    if(L != NULL) *L = NULL;
    return L;
}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor)
{
    if(L == NULL) return 0;
    struct nodo *no = (struct nodo*) malloc(sizeof(struct nodo));
    if(no == NULL) return 0;
    no -> valor = valor;
    no -> proximo = L;
    L = no;
    return L;
}

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L)
{
    if (L == NULL) {
        printf("Lista Vazia.");
    }
    else{
    struct nodo *no = L;
    L = no -> proximo;
    }
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
    if (L == NULL) return 0;
    struct nodo *no = L;
    L = no -> proximo;
    free(no);
    return L;
}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){
    return (L == NULL);
}

