#include <stdio.h>
#include "ex4.h"

int main(){
    Lista *minhaLista = lst_cria();

    minhaLista = lst_insere(10, minhaLista);
    minhaLista = lst_insere(20, minhaLista);
    minhaLista = lst_insere(30, minhaLista);
    
    printf("Antes de retirar o final:\n");
    lst_imprime(minhaLista);

    minhaLista = lst_retiraFinal(minhaLista);
    
    printf("Depois de retirar o final:\n");
    lst_imprime(minhaLista);

    minhaLista = lst_retiraFinal(minhaLista);
    lst_imprime(minhaLista);

    minhaLista = lst_retiraFinal(minhaLista);
    lst_imprime(minhaLista);

    lst_libera(minhaLista);
    return 0;
}