//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include "ex1.h"

int main(){

    Lista *minhaLista = lst_cria();
    
 
    printf("Tamanho inicial: %d\n", lst_lenght(minhaLista));


    minhaLista = lst_insere(10, minhaLista);
    minhaLista = lst_insere(20, minhaLista);
    minhaLista = lst_insere(30, minhaLista);
    
    lst_imprime(minhaLista);


    int tamanho = lst_lenght(minhaLista);
    printf("Tamanho atual: %d\n", tamanho);


    minhaLista = lst_retira(20, minhaLista);
    printf("Apos retirar 20... ");
    lst_imprime(minhaLista);
    printf("Novo tamanho: %d\n", lst_lenght(minhaLista));


    lst_libera(minhaLista);
    return 0;
}