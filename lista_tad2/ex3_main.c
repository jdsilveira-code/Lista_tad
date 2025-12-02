//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include "ex3.h"

int main() {
    Fila *f = fila_cria();
    int valor;

    fila_insere(10, f);
    fila_insere(20, f);
    fila_insere(30, f);

    while (fila_retira(f, &valor)) {
        printf("Retirado: %d\n", valor);
    }

    fila_libera(f);
    return 0;
}