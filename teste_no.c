#include "no.h"
int main () {
    struct no n1; //sem typedef é preciso o struct e a tag "no"
    t_no n2; //usando typedef

    n1.info = 10;
    //n1 no campo info recebe 10
    n1.prox = NULL;

    printf("n1.info: %d\nn1.prox: %p\n", n1.info, n1.prox);

    struct no * p1;
    t_no * p2;

    p1 = constroi_no (20);
    //vai te dar um espaço na memoria do tamanho da struct nova
    printf("p1: %d\n", p1);
    printf("p1->info: %d\np1->prox: %p\n", p1->info, p1->prox);

    p1->prox = &n1;
    //no campo prox me mostre o elemento n1
    p1->prox->info = 35;
    //vai no campo info e faz ele receber p1
    //o campo info apontado pelo prox de p1
    printf("n1.info: %d\n", n1.info);
    return 0;
}