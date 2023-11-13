#include <stdio.h>

void calcularQuantidade();

int main (){

    calcularQuantidade();
    return 0;
}

void calcularQuantidade(){
    int contador = 0, pares = 0, impares = 0, negativos = 0, positivos = 0, numero;

    while (contador < 5){
        scanf ("%d", &numero);
        getchar();

        if (numero > 0){
            positivos += 1;
        }
        if (numero < 0){
            negativos += 1;
        }
        
        if (numero % 2 == 0){
            pares += 1;
        }
        else{
            impares += 1;
        }
        contador += 1;
    }
    printf ("%d valor(es) par(es)\n", pares);
    printf ("%d valor(es) impar(es)\n", impares);
    printf ("%d valor(es) positivo(s)\n", positivos);
    printf ("%d valor(es) negativo(s)\n", negativos);
}