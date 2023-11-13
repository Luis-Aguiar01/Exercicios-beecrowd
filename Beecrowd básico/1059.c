#include <stdio.h>

void calcularPares ();

int main (){
    calcularPares();
    return 0;
}

void calcularPares (){
    int i = 2;
    
    while (i <= 100){
        printf ("%d\n", i);
        i += 2;
    } 
}