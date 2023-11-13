#include <stdio.h>
#include <math.h>

void calcularQuadradoPares (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularQuadradoPares (numero);
    return 0;
}

void calcularQuadradoPares (int numero){
    int contador = 1;

    while (contador <= numero){
        contador += 1;
        if (contador % 2 == 0){
            printf ("%d^2 = %d\n", contador ,contador * contador);
        }
    }
}