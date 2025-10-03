#include <stdio.h>
#include <stdlib.h>

// struct no {
//     int info;
//     struct no * prox;
// }; //encerrador, no struct eh obrigatorio

//ou
typedef struct no {
    int info;
    struct no * prox;
} t_no;

t_no * constroi_no (int);