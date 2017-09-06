#include<stdio.h>
int main()
{
    float x,y,a;
    printf("Digite o valor da base: ");
    scanf("%f", &x);
    printf("Digite o valor da altura");
    scanf("%f", &y);
    a = (x*y)/2;
    printf("A area do quadrado e igual a: %.2f", a);
    return 0;
}

