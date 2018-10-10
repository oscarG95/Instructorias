//USAR LOS OPERADORES INCREMENTALES, DECREMENTALES
#include <stdio.h>
int main(){
    int m = 5, n = 10, o = 0;

    int *p1;
    int *p2;

    p1 = &m;    //variable para imprimir la direccion de m
    p2 = &n;    //variable para imprimir la direccion de n

    printf("p1 = %d\n", p1);
    printf("p2 = %d\n", p2);

    //postincremento
    p1++;
    printf("p1++ = %d\n", p1);
    //postdecremento
    p2--;
    printf("p2-- = %d\n", p2);

    return 0;
}
