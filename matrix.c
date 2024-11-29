



/*******************************************************
* Arquivo: matrix.c (Implementação)
* Descrição: Tipo abstrato de dados para representar Matrizes de valores reais alocadas
dinamicamente, com dimensões n por m fornecidas em tempo de execução.
* 
* Autor: Caio Bandeira Moreira
* Curso: Estrutura de Dados 1
* Professor: Anselmo Cardoso de Paiva
* Data: Novembro/2024
*******************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"

#define TRUE  1
#define FALSE 0

typedef struct
{
    int linhas;
    int colunas;
    float* v;   //Vetor que irá ser alocado;
    
} Matrix;


// matCreate
// cria uma Matrix de dimensão m por n;

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


// matDestroy
// libera a memória alocada para a Matrix;

int matDestroy (Matrix* mat){
    if (mat != NULL ) {
        free(mat->v);  //Desaloca inversamente a Alocação 
        free(mat);
        return TRUE;
    }

    return FALSE;
}



// matGetElemIJ
// acessa o elemento da linha i e da coluna j da Matrix

float matGetElemIJ(Matrix* mat, int j, int i) {
   if (mat != NULL && (i >= 0 && j >=0) && (i < mat->linhas && j < mat->colunas)) {
        int k = i *mat->colunas + j;
        return mat->v[k];
    }

    return -1;
}    
 

// matSetElemIJ
// atribui o elemento da linha i e da coluna j da Matrix;

int matSetElemIJ(Matrix* mat, int j, int i, float v) {
   if (mat != NULL && (i >= 0 && j >=0) && (i < mat->linhas && j < mat->colunas)) {
        int k = i * mat->colunas + j;
        mat->v[k] = v;
        return TRUE;
    }

    return FALSE;
}    


// matGetNumLines
// devolve o número de linhas da Matrix;

int matGetNumLines(Matrix* mat) {
    if (mat != NULL) {
        return mat->linhas;
    }
    return FALSE;
}


// matGetNumCollumns
// devolve o número de colunas da Matrix.

int matGetNumCollumns(Matrix* mat) {
    if (mat != NULL) {
        return mat->colunas;
    }
    return FALSE;
}

