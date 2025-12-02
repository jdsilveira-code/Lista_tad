//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include <stdlib.h>
#include "ex2.h"

int main() {
    Fila *f = fila_cria();

    if (f != NULL) {
        printf("Fila alocada com sucesso.\n");
    }

    free(f);
    return 0;
}