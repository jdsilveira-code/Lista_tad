//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdlib.h>
#include "ex3.h"

struct celula {
    int conteudo;
    struct celula *prox;
};

struct fila {
    struct celula *ini;
    struct celula *fim;
};

Fila* fila_cria(void) {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

void fila_insere(int conteudo, Fila *f) {
    struct celula *nova = (struct celula*) malloc(sizeof(struct celula));
    nova->conteudo = conteudo;
    nova->prox = NULL;
    if (f->fim != NULL) {
        f->fim->prox = nova;
    } else {
        f->ini = nova;
    }
    f->fim = nova;
}

int fila_retira(Fila *f, int *v) {
    if (f->ini == NULL) {
        return 0;
    }
    struct celula *t = f->ini;
    *v = t->conteudo;
    f->ini = t->prox;
    if (f->ini == NULL) {
        f->fim = NULL;
    }
    free(t);
    return 1;
}

void fila_libera(Fila *f) {
    struct celula *p = f->ini;
    while (p != NULL) {
        struct celula *t = p->prox;
        free(p);
        p = t;
    }
    free(f);
}