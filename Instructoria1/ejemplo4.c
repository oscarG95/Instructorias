#include<stdio.h>
int main()
{
//NUmero feos divisibles entre 2, 3, 5
int numero;
int nfeo;
printf("Ingrese el numero");
scanf("%d", &numero);
if(numero%2==0 || numero%3==0 || numero%5==0){
	printf(" El numero %d es un numero feo \n" , numero);
}

	return 0;
}