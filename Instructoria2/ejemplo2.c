//Crear un programa que sume todos los elementos de un array.
#include<stdio.h>
//METODO SUMA DEBE SER DECLARADO EN LA CABECERA PARA QUE TENGA AMBITO GLOBAL
int suma=0;

int main(){
int tamano;
printf("Escriba cuantos elementos guardara el array: ");
scanf("%d", &tamano);
int numeros[tamano];
//LENADO DEL VECTOR
printf("Ingrese los numeros: \n");
for(int i=0;i<tamano;i++){
    scanf("%d", &numeros[i]);
}
//METODO PARA SUMAR LOS VALORES
for(int i=0;i<tamano;i++){
suma=suma+numeros[i];
}
printf("El resultado es: ");
printf("%d\n", suma);
return 0;
}
