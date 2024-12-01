


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
#define MATRIX_H   // Define MATRIX_H para evitar múltiplas inclusões.

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
// Declaração da estrutura Matrix
typedef struct
{
    int linhas;
    int colunas;
    float* v;   //Vetor que irá ser alocado;
    
} Matrix;

=======
>>>>>>> 0df30b7 (Atualizações Struct)

// Definição completa da estrutura Matrix
typedef struct matrix {
    int linhas;
    int colunas;
    float* v;   // Vetor que será alocado
} Matrix;


/**
 * Cria uma Matrix de dimensão n por m.
 *
 * Pré-condição: n > 0 e m > 0. 
 * Pós-condição: Retorna um ponteiro para uma nova matriz de dimensão n por m, ou NULL se a alocação falhar.
 */
Matrix* matCreate(int n, int m);


/**
 * Libera a memória alocada para a Matrix.
 *
 * Pré-condição: mat é um ponteiro válido para uma Matrix criada por matCreate.
 * Pós-condição: A memória alocada para a Matrix e seus dados é liberada. Retorna 1 (TRUE) em caso de sucesso, ou 0 (FALSE) se a Matrix for NULL.
 */
int matDestroy(Matrix* mat);


/**
 * Acessa o elemento da linha i e da coluna j da Matrix.
 *
 * Pré-condição: mat é um ponteiro válido para uma Matrix criada por matCreate. 
 *               i e j são índices válidos dentro da matriz (0 <= i < n e 0 <= j < m).
 * Pós-condição: Retorna o valor do elemento localizado na linha i e coluna j da Matrix, ou -1 se os índices forem inválidos.
 */
float matGetElemIJ(Matrix* mat, int j, int i);


/**
 * Atribui o valor v ao elemento da linha i e da coluna j da Matrix.
 *
 * Pré-condição: mat é um ponteiro válido para uma Matrix criada por matCreate. 
 *               i e j são índices válidos dentro da matriz (0 <= i < n e 0 <= j < m).
 * Pós-condição: O valor v é atribuído ao elemento na posição [i][j] da Matrix. Retorna 1 (TRUE) em caso de sucesso, ou 0 (FALSE) se os índices forem inválidos.
 */
int matSetElemIJ(Matrix* mat, int j, int i, float v);


/**
 * Devolve o número de linhas da Matrix.
 *
 * Pré-condição: mat é um ponteiro válido para uma Matrix criada por matCreate.
 * Pós-condição: Retorna o número de linhas da Matrix, ou 0 se mat for NULL.
 */
int matGetNumLines(Matrix* mat);


/**
 * Devolve o número de colunas da Matrix.
 *
 * Pré-condição: mat é um ponteiro válido para uma Matrix criada por matCreate.
 * Pós-condição: Retorna o número de colunas da Matrix, ou 0 se mat for NULL.
 */
int matGetNumCollumns(Matrix* mat);



#endif // Fecha a proteção
