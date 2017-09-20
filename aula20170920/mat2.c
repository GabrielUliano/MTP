#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x1, x2, y1, lado;
    printf("Entre com os 2 lados do triangulo: ");
    scanf("%f,%f", &x1, &y1);
    printf("Entre com o angulo em radianos: ");
    scanf("%f", &x2);
    lado = sqrt(pow(y1,2)+pow(x1,2)-2*x1*y1*cos(x2));
    printf("o tamanho do terceiro lado e' %f \n", lado);
    return EXIT_SUCCESS;
}

