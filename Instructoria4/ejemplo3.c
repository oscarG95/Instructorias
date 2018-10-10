/*MOSTRAR LOS VALORES Y LA POSICION DE MEMORIA
DE TODOS LOS ELEMENTOS DE UN ARRAY*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char vector[25];
    char letra;
    char *puntero;
    int i=0;
    //LLENADO VECTOR
    for(letra='A';letra<='Z';letra++){
        if(i<=25){
          vector[i]=letra;
        }
        i++;
    }
    //ESTE PUNTERO ESTA APUNTANDO HACIA LA PRIMERA POSICION DEL ARRAY

puntero=&vector;

    for(i=0;i<=25;i++){
        printf("\n");
        printf("%c",*puntero);
        printf("\t");
        printf("%p",puntero);
		puntero++;
    }

return 0;
}
