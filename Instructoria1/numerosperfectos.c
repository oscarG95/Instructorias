#include<stdio.h>
int main(){
	int contador=0;
	
	int numero;
	int i; 
	printf("Ingrese el numero");
	scanf("%d", &numero);
	for(i=1; i<numero; i++){
		if(numero%i==0){
			contador=contador+i;
			}
		}
	if(contador==numero){
		printf("El numero es perfecto");
		}
		else{
			printf("El numero NO es perfecto");
			}
	}
