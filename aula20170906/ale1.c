#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int x = rand()%100;
    int maior=293, menor=101;
    int y = menor + rand()%(maior-menor+1);
    printf("Numero entre 0 e 99: %d\n", x);
    printf("Numero entre 101 e 293: %d\n", y);
    return 0;
}
