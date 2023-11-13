#include <stdio.h>

void calcularResto (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularResto (numero);
    return 0;
}

void calcularResto (int numero){
    int contador = 0;
    
    while (++contador <= 10000){
        if (contador % numero == 2){
            printf ("%d\n", contador);
        }
    }
}