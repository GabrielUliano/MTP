#include<stdio.h>
#include<stdlib.h>

int somafracao(int num1, int den1, int num2, int den2, int * pnumR, int * pdenR)
{
    if(den1==0 || den2==0)
        return 0;
    else
    {
        *pnumR = den2*num1+den1*num2;
        *pdenR = den1*den2;
        return 1;
    }
}

int main()
{
    int num1, den1,  num2, den2, numR, denR;
    printf("entre com um numero racional na forma de num/den:");
    scanf("%d/%d",&num1,&den1);
    printf("entre com outro numero racional na forma de num/den:");
    scanf("%d/%d",&num2,&den2);
    somafracao(num1, den1, num2, den2, numR, denR);
    printf("a soma das fracoes resulta em: %d/%d\n", numR, denR);
    return EXIT_SUCCESS;
}
