#include <stdio.h>

void calcularCasosTeste (int numero);

int main (){
    int numero;
    scanf ("%d", &numero);

    calcularCasosTeste (numero);
    return 0;
}

void calcularCasosTeste (int numero){
    int contador = 0;
    double numero1, numero2, numero3, soma = 0;

    while (++contador <= numero){
        scanf ("%lf %lf %lf", &numero1, &numero2, &numero3);
        soma = ((numero1 * 2) + (numero2 * 3) + (numero3 * 5));
        printf ("%.1lf\n", (soma / 10));
    }
}