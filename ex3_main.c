#include <stdio.h>
#include "ex3.h"

int main(){
    Lista *minhaLista = lst_cria();
    Lista *resultado;

    minhaLista = lst_insere(10, minhaLista);
    minhaLista = lst_insere(20, minhaLista);
    minhaLista = lst_insere(30, minhaLista);
    
    lst_imprime(minhaLista);

    resultado = lst_busca(20, minhaLista);
    if (resultado != NULL) {
        printf("Elemento 20 encontrado.\n");
    } else {
        printf("Elemento 20 nao encontrado.\n");
    }

    resultado = lst_busca(99, minhaLista);
    if (resultado != NULL) {
        printf("Elemento 99 encontrado.\n");
    } else {
        printf("Elemento 99 nao encontrado.\n");
    }

    lst_libera(minhaLista);
    return 0;
}