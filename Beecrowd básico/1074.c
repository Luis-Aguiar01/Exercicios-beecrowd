#include <stdio.h>

void calcularNumeros (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularNumeros (numero);
    return 0;
}

void calcularNumeros (int numero){
    int contador = 0, numero_digitado;

    while (++contador <= numero){
        scanf ("%d", &numero_digitado);
        
        if (numero_digitado > 0 && numero_digitado % 2 == 0){
            printf ("EVEN POSITIVE\n");
        }
        else if (numero_digitado > 0 && numero_digitado % 2 != 0){
            printf ("ODD POSITIVE\n");
        }
        else if (numero_digitado < 0 && numero_digitado % 2 == 0){
            printf ("EVEN NEGATIVE\n");
        }
        else if (numero_digitado < 0 && numero_digitado % 2 != 0){
            printf ("ODD NEGATIVE\n");
        }
        else if (numero_digitado == 0){
            printf ("NULL\n");
        }
    }
}