//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#ifndef EX1_H
#define EX1_H

typedef struct celula Celula;
typedef struct pilha Pilha;

Pilha* pilha_cria(void);
void pilha_empilhar(int conteudo, Pilha *p);
void pilha_libera(Pilha *p);

#endif