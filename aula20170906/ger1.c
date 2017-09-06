#include<stdio.h>
int main()
{
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    getchar();
    int i;
    for(i=2;i<numero;i++)
    {
        if(numero%i == 0)
            break;
    }
    if(i==numero)
    {
        printf("O numero e primo.\n");
    }
    else
    {
        printf("O numero nao e primo.\n");
    }
    return 0;
}
