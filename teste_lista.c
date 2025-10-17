#include "lista.h"

int main (){
    t_lista l;
    inicia_lista(&l);
    if(esta_vazia(&l)){
        printf("Lista vazia.\n");
    }
    else {
        printf("Ops...\n");
    }

    insere_inicio(10, &l);
    insere_inicio(20, &l);
    insere_inicio(30, &l);
    printf("Lista depois das insercoes de inicio:\n");
    exibe_lista(&l);
    int excluido;
    if (remove_inicio(&l, &excluido)) {
        printf("%d foi removido do inicio...", excluido);
        printf("\nLista apos a remocao de inicio:\n");
        exibe_lista(&l);
    }
    else{
        printf("Falha na remocao de inicio\n");
    }

    insere_fim(15, &l);
    insere_fim(25, &l);
    insere_fim(35, &l);
    printf("Lista depois das insercoes de fim:\n");
    exibe_lista(&l);
    if(remove_fim(&l, &excluido)){
        printf("");
    }


    return 0;
}