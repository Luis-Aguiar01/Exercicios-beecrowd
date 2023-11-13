#include <stdio.h>

void calcularImpares (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularImpares(numero);
    return 0;
}

void calcularImpares (int numero){
    
    int contador = 1;
    
    while (contador <= numero){
        
        if (contador % 2 != 0){
        printf ("%d\n", contador);
        }
        contador += 1;
    }
}