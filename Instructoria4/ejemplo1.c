#include<stdio.h>
int main(){
char nombre[20];
gets(nombre);
int cont=0;
char *p_nombre;
p_nombre=nombre;
while(*p_nombre){
    p_nombre++;
    cont++;
}
    printf("%d",cont);
return 0;
}
