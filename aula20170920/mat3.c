#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a, b, res;
    printf("Entre com o numero e a base do logaritimo: ");
    scanf("%f,%f", &a, &b);
    res = log10(a)/log10(b);
    printf("o resultado do logaritimo e' %f \n", res);
    return EXIT_SUCCESS;
}


