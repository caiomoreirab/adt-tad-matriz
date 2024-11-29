#ifndef MATRIX_H   // Verifica se OPERACOES_H ainda não foi definido.
#define MATRIX_H   // Define OPERACOES_H para evitar múltiplas inclusões



//cria uma Matrix de dimensão m por n;

Matrix* matCreate (int n, int m);



//} matDestroy
//} libera a memória alocada para a Matrix;

int matDestroy (Matrix* mat);


// matGetElemIJ
//acessa o elemento da linha i e da coluna j da Matrix

float matGetElemIJ(Matrix* mat, int j, int i);

// matSetElemIJ
//} atribui o elemento da linha i e da coluna j da Matrix;

int matSetElemIJ(Matrix* mat, int j, int i, float v);  



//} matGetNumLines
//} devolve o número de linhas da Matrix;

int matGetNumLines(Matrix* mat);

//} matGetNumCollumns
//} devolve o número de colunas da Matrix.

int matGetNumCollumns(Matrix* mat);




#endif // Fecha a proteção.