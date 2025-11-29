#ifndef EX4_H
#define EX4_H

typedef struct celula Lista;

Lista* lst_cria(void);
void lst_libera(Lista *lista);
Lista* lst_insere(int conteudo, Lista *lista);
void lst_imprime(Lista *lista);
Lista* lst_retira(int conteudo, Lista *lista);

int lst_lenght(Lista *lista);
Lista* lst_insereFinal(int conteudo, Lista *lista);
Lista* lst_busca(int conteudo, Lista *lista);

Lista* lst_retiraFinal(Lista *lista);

#endif