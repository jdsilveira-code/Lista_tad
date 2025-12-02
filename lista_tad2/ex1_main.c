//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#include <stdio.h>
#include "ex1.h"

int main() {
    Pilha *p = pilha_cria();
    
    pilha_empilhar(10, p);
    pilha_empilhar(20, p);
    pilha_empilhar(30, p);
    
    pilha_libera(p);
    
    return 0;
}