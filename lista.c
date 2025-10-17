#include "lista.h"

void inicia_lista(t_lista *l){
    l->primeiro = NULL;
    l->tamanho = 0;
}

int esta_vazia(t_lista *l){
    return l->tamanho == 0;
}

int insere_inicio(int i, t_lista *l){
    t_no * novo = constroi_no(i);
    if(novo == NULL) return FRACASSO;
        if(!esta_vazia(l)){
        novo->prox = l->primeiro;
        }
        l->primeiro = novo;
        l->tamanho++;
        return SUCESSO;
        }

int remove_inicio(t_lista *l, int *i){
    if(esta_vazia(l)) return FRACASSO;
            *i = l->primeiro->info;
            struct no * temp_ponteiro = l->primeiro;
            l->primeiro = l->primeiro->prox;
            l->tamanho--;
            free(temp_ponteiro);
            return SUCESSO;
}

void exibe_lista (t_lista *l){
    if(esta_vazia(l)) {
    printf("Lista vazia...\n");
    }
    else {
        struct no * aux = l->primeiro;
        while (aux != NULL){
            printf("[%d] -> \n", aux->info);
            aux = aux->prox;
        }
        printf("*********************************\n");
    }
}

int insere_fim(int i, t_lista *l){
    t_no * novo = constroi_no(i);
    if(novo == NULL) return FRACASSO;
    if(esta_vazia(l)){
    l->primeiro = novo;
    }
    else {
        t_no * aux = l->primeiro;
        while(aux->prox != NULL){//vai ate o ultimo elemento
            aux = aux->prox;
        }
        aux->prox = novo;
    }
       return SUCESSO;
}

int remove_fim(t_lista *l, int *i){
    if(esta_vazia(l)) return FRACASSO;
    if(l->primeiro->prox == NULL){//verifica se só tem uma caixinha só
        *i = l->primeiro->info;
        free(l->primeiro);
        l->primeiro = NULL;
    }

    else{ //se tiver pelo menos 2 elementos
        t_no * aux = l->primeiro;
        while(aux->prox->prox != NULL){
            aux = aux->prox;
        }
        *i = aux->prox->info;
        free(aux->prox);
        aux->prox = NULL;
    }
    return SUCESSO;
}