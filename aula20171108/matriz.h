#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>

typedef
	struct aMatriz {
		double ** m;
		int lin, col;
	}
Matriz;

Matriz criarMatriz(int M, int N) {
	Matriz A;
	int i;
	A.m = calloc(M, sizeof(double *));
	for(i = 0; i < M; i++)
		A.m[i] = calloc(N, sizeof(double));
	A.lin = M;
	A.col = N;
	return A;
}

void destruirMatriz(Matriz A) {
	int i;
	for(i = 0; i < A.lin; i++)
		free(A.m[i]);
	free(A.m);
}

void preencherMatriz(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++)
		for(j = 0; j < A.col; j++) {
			printf("Entre com o elemento [%d][%d]: ", i, j);
			scanf("%lf", A.m[i]+j);
		}
}

void imprimirMatriz(Matriz A) {
	int i, j;
	for(i = 0; i < A.lin; i++) {
		for(j = 0; j < A.col; j++)
			printf("%lg\t", A.m[i][j]);
		printf("\n");
	}
	printf("> %dx%d\n\n", A.lin, A.col);
}

Matriz transposta(Matriz A) {
	Matriz At = criarMatriz(A.col, A.lin); // ordem transposta
	int i, j;
	for(i = 0; i < A.col; i++)
		for(j = 0; j < A.lin; j++)
			At.m[i][j] = A.m[j][i];
	return At;
}
#endif
