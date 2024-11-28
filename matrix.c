#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


typedef struct
{
    int linhas;
    int colunas;
    float* v;
    
} Matrix ;


Matrix * matCreate (int n, int m){

    Matrix *mat; Matrix m; Matrix m; m.linhas; n.colunas;

    if ( n > 0 && m > 0 ) {
        mat = (Matrix*) malloc(sizeof(Matrix));
    }


            mat = (Matrix*) malloc(sizeof(Matrix));


    if (mat != NULL) {
        mat->linhas = n;
        mat->colunas= m;
        mat->v = (float *) malloc(sizeof(float) *n*m);
    }
    if ( mat->v != NULL ) {
        return mat;
    }

    free(mat);
    
    return NULL;
}


