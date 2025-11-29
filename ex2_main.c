//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include "ex2.h"

int main(){
    Lista *minhaLista = lst_cria();
    
    printf("=== Teste Exercicio 2: Insercao no Final ===\n");

    minhaLista = lst_insereFinal(10, minhaLista);
    lst_imprime(minhaLista); 

    minhaLista = lst_insereFinal(20, minhaLista);
    minhaLista = lst_insereFinal(30, minhaLista);
    lst_imprime(minhaLista);

    minhaLista = lst_insere(5, minhaLista); 
    lst_imprime(minhaLista);
    
    printf("Tamanho final: %d\n", lst_lenght(minhaLista));

    lst_libera(minhaLista);
    return 0;
}