//NUmeros Oblongos
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int rango;
	printf("Ingrese un rango \n");
	scanf("%d", &rango);
	for(i=1;i<rango;i++){
		printf("%d\n", i*(i+1) );

	}

	return 0;
}