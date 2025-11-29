//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#ifndef EX1_H
#define EX1_H

typedef struct celula Lista;

Lista* lst_cria(void);
void lst_libera(Lista *lista);
Lista* lst_insere(int conteudo, Lista *lista);
void lst_imprime(Lista *lista);
Lista* lst_retira(int conteudo, Lista *lista);

int lst_lenght(Lista *lista);

#endif