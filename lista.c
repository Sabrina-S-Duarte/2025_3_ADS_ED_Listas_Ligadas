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
        printf("//\n");
    }
}