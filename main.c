#include <stdio.h>
#include "matrix.h"

int main() {
    
    // Cria uma matriz de 3x3
    Matrix* mat = matCreate(3, 3);
    if (mat == NULL) {
        printf("Erro ao criar a matriz!\n");
        return 1;  // Retorna 1 em caso de erro
    }

    // Preenche alguns valores na matriz
    matSetElemIJ(mat, 0, 0, 1.1);  // mat[0][0] = 1.1
    matSetElemIJ(mat, 1, 1, 2.2);  // mat[1][1] = 2.2
    matSetElemIJ(mat, 2, 2, 3.3);  // mat[2][2] = 3.3

    // Acessa e imprime os valores da matriz
    printf("mat[0][0] = %.2f\n", matGetElemIJ(mat, 0, 0));  // Esperado: 1.1
    printf("mat[1][1] = %.2f\n", matGetElemIJ(mat, 1, 1));  // Esperado: 2.2
    printf("mat[2][2] = %.2f\n", matGetElemIJ(mat, 2, 2));  // Esperado: 3.3

    // Imprime o número de linhas e colunas
    printf("Número de linhas: %d\n", matGetNumLines(mat));  // Esperado: 3
    printf("Número de colunas: %d\n", matGetNumCollumns(mat));  // Esperado: 3

    // Destrói a matriz e libera a memória
    if (matDestroy(mat)) {
        printf("Matriz destruída com sucesso!\n");
    } else {
        printf("Erro ao destruir a matriz!\n");
    }

    return 0;  // Retorna 0 para indicar sucesso
}
