#include<stdio.h>

int main(){
    int i, j;
int arreglo[4][4];
int aux;

//LLENAR EL ARREGLO
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
            printf("Ingrese un numero: ");
        scanf("%d", &arreglo[i][j]);
    }
}



//IMPRIMIR EL ARREGLO
for(i=0;i<4;i++){
        printf("\n");
    for(j=0;j<4;j++){
            printf("%d%d: %d\t",i,j, arreglo[i][j]);
    }
}
return 0;
}
