//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

struct celula {
    int conteudo;
    struct celula *prox;
};

Lista* lst_cria(void) {
    return NULL;
}

Lista* lst_insere(int conteudo, Lista *lista) {
    Lista *nova = (Lista*) malloc(sizeof(Lista));
    if (nova == NULL) {
        printf("Erro de alocacao \n");
        exit(1);
    }
    nova->conteudo = conteudo;
    nova->prox = lista;
    return nova;
}

void lst_imprime(Lista *lista) {
    Lista *p;
    printf("Lista: ");
    for (p = lista; p != NULL; p = p->prox) {
        printf("%d -> ", p->conteudo);
    }
    printf("NULL\n");
}

void lst_libera(Lista *lista) {
    Lista *p = lista;
    while (p != NULL) {
        Lista *t = p->prox;
        free(p);
        p = t;
    }
}

Lista* lst_retira(int conteudo, Lista *lista) {
    Lista *ant = NULL;
    Lista *p = lista;

    while (p != NULL && p->conteudo != conteudo) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) return lista;

    if (ant == NULL) {
        lista = p->prox;
    } else {
        ant->prox = p->prox;
    }
    free(p);
    return lista;
}


int lst_lenght(Lista *lista) {
    int contador = 0;
    Lista *p;
    
 
    for (p = lista; p != NULL; p = p->prox) {
        contador++;
    }
    
    return contador;
}