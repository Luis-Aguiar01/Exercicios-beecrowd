#include <stdio.h>

void somarImpares (int numero1, int numero2);

int main (){
    int numero1, numero2;
    scanf ("%d %d", &numero1, &numero2);

    somarImpares (numero1, numero2);
    return 0;
}

void somarImpares (int numero1, int numero2){

    int somaImpar = 0;

    if (numero1 < numero2){
        while (++numero1 < numero2){
            if (numero1 % 2 != 0){
                somaImpar += numero1;
            }
        }
    }
    else if (numero1 > numero2){
        while (++numero2 < numero1){
            if (numero2 % 2 != 0){
                somaImpar += numero2;
            }
        }
    }
    else if (numero1 == numero2){
        somaImpar = 0;
    }
    printf ("%d\n", somaImpar);
}