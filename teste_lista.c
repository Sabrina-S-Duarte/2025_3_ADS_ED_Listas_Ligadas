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



    return 0;
}