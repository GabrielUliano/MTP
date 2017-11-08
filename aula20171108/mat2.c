#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main()
{
    int ordem,det;
    Matriz A;
    printf("entre com a ordem de uma matriz quadrada: ");
    scanf("%d", &ordem);
    printf("entre com os elementos da matriz: ");
    A= criarMatriz (ordem,ordem);
    preencherMatriz (A);
    det = determinante (A);
    printf("o valor do determinante eh: %d", det);
    return EXIT_SUCCESS;
}
