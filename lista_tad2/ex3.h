//Carlos Barroca Faria e José Davi Silveira Gomes 29/11
#ifndef EX3_H
#define EX3_H

typedef struct fila Fila;

Fila* fila_cria(void);
void fila_insere(int conteudo, Fila *f);
int fila_retira(Fila *f, int *v);
void fila_libera(Fila *f);

#endif