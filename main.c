#include <stdio.h>
#include "matrix.h"
#include "matrix.c"

int main() {
    // Criação de uma matriz 2x2
    Matrix* mat = matCreate(2, 2);
    if (mat == NULL) {
        printf("Erro ao criar a matriz.\n");
        return 1;  // Sai do programa em caso de erro
    }

    // Atribuir valores à matriz
    if (!matSetElemIJ(mat, 0, 0, 1.0)) {
        printf("Erro ao atribuir valor à posição [0][0].\n");
    }
    if (!matSetElemIJ(mat, 0, 1, 2.0)) {
        printf("Erro ao atribuir valor à posição [0][1].\n");
    }
    if (!matSetElemIJ(mat, 1, 0, 3.0)) {
        printf("Erro ao atribuir valor à posição [1][0].\n");
    }
    if (!matSetElemIJ(mat, 1, 1, 4.0)) {
        printf("Erro ao atribuir valor à posição [1][1].\n");
    }

    // Imprimir valores da matriz
    printf("Valores da matriz 2x2:\n");
    for (int i = 0; i < matGetNumLines(mat); i++) {
        for (int j = 0; j < matGetNumCollumns(mat); j++) {
            printf("mat[%d][%d] = %.2f\n", i, j, matGetElemIJ(mat, j, i));
        }
    }

    // Liberar memória da matriz
    if (matDestroy(mat)) {
        printf("Matriz destruída com sucesso.\n");
    } else {
        printf("Erro ao destruir a matriz.\n");
    }

    return 0;
}
