#include <stdio.h>

typedef struct {
    int *v;
    int n, tam;
}FP;

FP *cria_heap(int tam){
    FP *fp = malloc(sizeof(FP));
    fp->v = malloc(tam * sizeof(int));
    fp->tam = tam;
    fp->n = 0;
    return fp;
}

int pai(int i){ return (i-1)/2;}

void troca(int *v, int i, int j){
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void insere(FP *fp, int x){
    fp->v[fp->n] = x;
    fp->n++;
    sobe_na_heap(fp, fp->n-1);
}

void sobe_na_heap(FP *fp, int i){
    if (i > 0 && fp->v[pai(i)] < fp->v[i])
    {
        troca(fp->v, pai(i), i);
        sobe_na_heap(fp, pai(i));
    }
}

int remove(FP *fp){
    troca(fp->v, 0, fp->n-1);
    fp->n--;
    desce_na_heap(fp, 0);
    return fp->v[fp->n];
}

void desce_na_heap(FP *fp ,int i){
    int maior_filho, esq = 2*i+1, dir = 2*i+2;
    if(esq < fp->n){
        maior_filho = esq;
        if (dir < fp->n && fp->v[dir] > fp->v[esq])
        {
            maior_filho = dir;
        }
        if (fp->v[i] < fp->v[maior_filho])
        {
            troca(fp->v, i, maior_filho);
            desce_na_heap(fp, maior_filho);
        }  
    }
}

void heapsort(int *v, int n){
    FP *fp = cria_heap(n);
    for (int i = 0; i < n; i++)
    {
        insere(fp, v[i]);
    }
    for (int i = n-1; i > 0; i--)
    {
        v[i] = remove(fp);
    }
}

//Vetor em um heap

//Professor passou o código a baixo para isso, mas com argumentos a mais nas funçõe
//Desce na heap e remove.
/*
void heapsortV(int *v, int n){

    for (int i = n/2; i > 0; i--)
    {
        desce_na_heap(v, n, i);
    }
    while (n > 0)
    {
        remove(v, n);
        n--;
    }
}
*/