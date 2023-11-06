#include <stdio.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
}no;

no *cria_arvore(int dado, no *esq, no *dir){
    no *raiz = malloc(sizeof(no));
    raiz->esq = esq;
    raiz->dir = dir;
    raiz->dado = dado;
    return raiz;
}

no *insere(no *raiz, int ch){
    if(raiz == NULL){
        no *novo = malloc(sizeof(no));
        novo->esq, novo->dir = NULL;
        novo->dado = ch;
        return novo;
    }
    if(ch < raiz->dado){
        raiz->esq = insere(raiz->esq, ch);
    }
    raiz->dir = insere(raiz->dir, ch);
    return 0;
}

no *busca(no *raiz, int x){
    while (raiz != NULL && raiz->dado != x)
    {
        if(x < raiz->dado) raiz = raiz->esq;
        else raiz = raiz->dir;
    }
    return raiz;
}

no *remove(no *raiz, int ch){
    if(raiz == NULL) return NULL;
    if (ch < raiz->dado)
    {
        raiz->esq = remove(raiz->esq, ch);
    }
    else if(ch > raiz->dado){
      raiz->dir = remove(raiz->dir, ch);  
    }
    else{
        if(raiz->esq == NULL) return raiz->dir;
        else if(raiz->dir == NULL) return raiz->esq;
    }
        int novaCH;
        raiz->dir = remove_sucessor(raiz->dir, &novaCH);
        raiz->dado = novaCH;
    return raiz;
}

no *remove_sucessor(no *raiz, int *ch){
    if (raiz->esq == NULL)
    {
        *ch = raiz->dado;
        return raiz->dir;
    }
    raiz->esq = remove_sucessor(raiz->esq, ch);
    return raiz;
}

pre_ordem(no *raiz){
    printf("%d", raiz->dado);
    pre_ordem(raiz->esq);
    pre_ordem(raiz->dir);
}
in_ordem(no *raiz){
    
    in_ordem(raiz->esq);
    printf("%d", raiz->dado);
    in_ordem(raiz->dir);
}
pos_ordem(no *raiz){
    pos_ordem(raiz->esq);
    pos_ordem(raiz->dir);
    printf("%d", raiz->dado);
}