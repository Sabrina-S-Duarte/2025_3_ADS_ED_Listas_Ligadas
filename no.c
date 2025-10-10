#include "no.h"

t_no * constroi_no(int n){
    t_no * ponteiro_novo_no = (t_no*) malloc (sizeof (t_no));
    //malloc devolve um pont generico
    //o t_no * especifica que vc quer um pont tipo_no
     if (ponteiro_novo_no != NULL){
        ponteiro_novo_no->info = n;
        ponteiro_novo_no->prox= NULL;
        //verificacao de erro para o pont retornar null
     }
     return ponteiro_novo_no;
}