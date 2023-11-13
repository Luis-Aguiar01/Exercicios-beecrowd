#include <stdio.h>

void calcularFormato();

int main (){

    calcularFormato();
    return 0;
}

void calcularFormato(){

    int I = 1, J = 7;

    while (I <= 9){
        printf ("I=%d J=%d\n", I, J);
        printf ("I=%d J=%d\n", I, --J);
        printf ("I=%d J=%d\n", I, --J);
        I += 2;
        J += 4;
    }
}
