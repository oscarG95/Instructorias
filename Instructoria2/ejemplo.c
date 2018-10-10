/*Un programa que pida al usuario 5 números reales y luego los muestre en el orden
contrario al que se introdujeron.*/
#include<stdio.h>
#define tamano 5
int main(){
int numeros[tamano];
int i;
//LLENADO DEL ARRAY HACIENDO USO DE UN FOR
for(i=0;i<=tamano-1;i++){
    printf("Inserte un numero ");
scanf("%i", &numeros[i]);
}
//IMPRIMIR EL ARRAY EN EL ORDEN QUE FUE INGRESADO
for(i=0;i<=tamano-1;i++){
    printf("%d \n", numeros[i]);
}
        printf("Ahora al reves \n");
//IMPRIMIR EL ARRAY AL REVES DE COMO FUE INGRESADO
for(i=tamano-1;i>=0;i--){
        printf("%d \n", numeros[i] );
}

return 0;
}
