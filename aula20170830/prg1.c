#include<stdio.h>
int conv(char ** str)
{
	int x;
	int i=0;
	while(str[i]) { x = x*10 + str[i]-48; i++;}
	return x;
}
int main(int argc, char ** argv)
{
	printf("soma = %d\n" , conv(argv[1]) + conv(argv[2]));
	printf("subtração = %d\n" , conv(argv[1]) - conv(argv[2]));
	printf("multiplicação = %d\n" , conv(argv[1]) * conv(argv[2]));
	printf("quociente = %d\n" , conv(argv[1]) / conv(argv[2]));
	printf("resto = %d\n" , conv(argv[1]) % conv(argv[2]));
	return 0;
}