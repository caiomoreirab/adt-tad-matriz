# TAD Matriz - Trabalho de Estrutura de Dados 1

Este projeto implementa um **Tipo Abstrato de Dados (TAD)** para manipulação de matrizes de valores reais. A matriz é criada de forma dinâmica, permitindo que as dimensões sejam definidas em tempo de execução.

## 📂 Estrutura do Projeto

- **`main.c`**: Exemplo de uso das funções implementadas.
- **`matrix.h`**: Definições e assinaturas das funções do TAD.
- **`matrix.c`**: Implementação das funções declaradas em `matrix.h`.

## 🛠️ Funcionalidades

1. **Criação de Matriz**
   - `Matrix* matCreate(int n, int m)`
   - Cria uma matriz de dimensões `n` x `m`.
   - Retorna um ponteiro para a matriz criada ou `NULL` em caso de falha.

2. **Destruição de Matriz**
   - `int matDestroy(Matrix* mat)`
   - Libera a memória alocada para a matriz.
   - Retorna `1` (TRUE) em caso de sucesso ou `0` (FALSE) se a matriz for inválida.

3. **Atribuir Valores**
   - `int matSetElemIJ(Matrix* mat, int j, int i, float v)`
   - Atribui o valor `v` à posição `[i][j]`.
   - Retorna `1` (TRUE) em caso de sucesso ou `0` (FALSE) se os índices forem inválidos.

4. **Acessar Valores**
   - `float matGetElemIJ(Matrix* mat, int j, int i)`
   - Retorna o valor na posição `[i][j]`.
   - Retorna `-1` se os índices forem inválidos.

5. **Obter Dimensões**
   - `int matGetNumLines(Matrix* mat)` - Retorna o número de linhas.
   - `int matGetNumCollumns(Matrix* mat)` - Retorna o número de colunas.
   - Retornam `0` se a matriz for inválida.

## 💻 Requisitos de Sistema

- **Compilador C**: GCC (ou compatível com a linguagem C).
- **Sistema Operacional**: Windows, Linux ou macOS.

## 🚀 Compilação e Execução

1. **Compilação**
   ```bash
   gcc main.c matrix.c -o matrix_program
📝 Exemplo de Uso
#include <stdio.h>
#include "matrix.h"

int main() {
    Matrix* mat = matCreate(2, 2);
    matSetElemIJ(mat, 0, 0, 1.0);
    matSetElemIJ(mat, 0, 1, 2.0);
    matSetElemIJ(mat, 1, 0, 3.0);
    matSetElemIJ(mat, 1, 1, 4.0);

    printf("Valor em [1][1]: %.2f\n", matGetElemIJ(mat, 1, 1));

    matDestroy(mat);
    return 0;
}
Saída esperada:
Valor em [1][1]: 4.00
👤 Autor
Nome: Caio Bandeira Moreira
Curso: Estrutura de Dados 1
Professor: Anselmo Cardoso de Paiva
Data: Novembro/2024
⚠️ Observação: Este projeto foi desenvolvido para fins acadêmicos e aprendizado. Sugestões e melhorias são bem-vindas!

Pronto para ser usado no GitHub! Caso precise de instruções adicionais para configurar o repositório, é só pedir. 😊
