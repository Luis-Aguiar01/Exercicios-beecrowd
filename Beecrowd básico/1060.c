#include <stdio.h>

void calcularPositivos (double numero);

int main (){
    double numero = 0;

    calcularPositivos (numero);
    
    return 0;
}

void calcularPositivos (double numero){
    int contador = 0;
    int positivos = 0;


    while (contador < 6){
        scanf ("%lf", &numero);
        getchar();
        
        if (numero > 0){
            positivos += 1;
        }
        contador += 1;
    }

    printf ("%d valores positivos\n", positivos);
}