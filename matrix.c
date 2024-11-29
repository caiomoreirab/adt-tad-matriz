#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"


typedef struct
{
    int linhas;
    int colunas;
    float* v;   //Vetor que irá ser alocado;
    
} Matrix;


//} matCreate
//} cria uma Matrix de dimensão m por n;

Matrix* matCreate (int n, int m){

    if (n <= 0 || m <= 0) {
        return NULL;  // Verifica se os parâmetros são válidos
    }

    Matrix* mat = (Matrix*) malloc(sizeof(Matrix));  // Aloca a estrutura da matriz

    if (mat == NULL) {
        return NULL;  // Verifica se a alocação da estrutura foi bem-sucedida
    }

    mat->linhas = n;
    mat->colunas = m;

    mat->v = (float*) malloc(sizeof(float) * n * m);  // Aloca o vetor de elementos
    if (mat->v == NULL) {
        return NULL;
    }

    return mat;  // Retorna a matriz criada com sucesso
}



//} matDestroy
//} libera a memória alocada para a Matrix;

int matDestroy (Matrix* mat){
    if (mat != NULL ) {
        free(mat->v);  //Desaloca inversamente a Alocação 
        free(mat);
        return 0;
    }

    return 1;
}



// matGetElemIJ
//acessa o elemento da linha i e da coluna j da Matrix

float matGetElemIJ(Matrix* mat, int j, int i) {
   if (mat != NULL && (i >= 0 && j >=0) && (i < mat->linhas && j < mat->colunas)) {
        int k = i *mat->colunas + j;
        return mat->v[k];
    }

    return -1;
}    
 

// matSetElemIJ
//} atribui o elemento da linha i e da coluna j da Matrix;

int matSetElemIJ(Matrix* mat, int j, int i, float v) {
   if (mat != NULL && (i >= 0 && j >=0) && (i < mat->linhas && j < mat->colunas)) {
        int k = i * mat->colunas + j;
        mat->v[k] = v;
        return 0;
    }

    return 1;
}    


//} matGetNumLines
//} devolve o número de linhas da Matrix;

int matGetNumLines(Matrix* mat) {
    if (mat != NULL) {
        return mat->linhas;
    }
    return -1;
}


//} matGetNumCollumns
//} devolve o número de colunas da Matrix.

int matGetNumCollumns(Matrix* mat) {
    if (mat != NULL) {
        return mat->colunas;
    }
    return -1;
}


A estrutura matserve como um "contenedor" de informações sobre a matriz, como o número de linhas e colunas,
 além de fornecer um ponteiro vpara os dados reais da matriz.
O ponteiro varmazena os valores da matriz em um vetor unidimensional.