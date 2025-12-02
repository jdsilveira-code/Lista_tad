//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdlib.h>
#include "ex1.h"

struct celula {
    int conteudo;
    struct celula *prox;
};

struct pilha {
    struct celula *topo;
};

Pilha* pilha_cria(void) {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void pilha_empilhar(int conteudo, Pilha *p) {
    struct celula *nova = (struct celula*) malloc(sizeof(struct celula));
    nova->conteudo = conteudo;
    nova->prox = p->topo;
    p->topo = nova;
}

void pilha_libera(Pilha *p) {
    struct celula *aux = p->topo;
    while (aux != NULL) {
        p->topo = aux->prox;
        free(aux);
        aux = p->topo;
    }
    free(p);
}