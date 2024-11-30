


/*******************************************************
* Arquivo: matrix.h (Especificações)
* Descrição: Tipo abstrato de dados para representar Matrizes de valores reais alocadas
dinamicamente, com dimensões n por m fornecidas em tempo de execução.
* 
* Autor: Caio Bandeira Moreira
* Curso: Estrutura de Dados 1
* Professor: Anselmo Cardoso de Paiva
* Data: Novembro/2024
*******************************************************/


#ifndef MATRIX_H   // Verifica se MATRIX_H ainda não foi definido.
#define MATRIX_H   // Define MATRIX_H para evitar múltiplas inclusões

#include <stdio.h>
#include <stdlib.h>

// Declaração da estrutura Matrix
typedef struct
{
    int linhas;
    int colunas;
    float* v;   //Vetor que irá ser alocado;
    
} Matrix;


//cria uma Matrix de dimensão m por n;
Matrix* matCreate (int n, int m);


// libera a memória alocada para a Matrix;
int matDestroy (Matrix* mat);


//acessa o elemento da linha i e da coluna j da Matrix
float matGetElemIJ(Matrix* mat, int j, int i);


// atribui o elemento da linha i e da coluna j da Matrix;
int matSetElemIJ(Matrix* mat, int j, int i, float v);  


// devolve o número de linhas da Matrix;
int matGetNumLines(Matrix* mat);


// devolve o número de colunas da Matrix.
int matGetNumCollumns(Matrix* mat);


#endif // Fecha a proteção.