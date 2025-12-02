//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdlib.h>
#include "ex2.h"

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