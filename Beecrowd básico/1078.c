#include <stdio.h>

void calcularTabuada (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularTabuada (numero);
    return 0;
}

void calcularTabuada (int numero){
    int contador = 0;

    while (++contador <= 10){
        printf ("%d x %d = %d\n", contador, numero, contador * numero);
    }
}