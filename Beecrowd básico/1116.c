#include <stdio.h>

void calcularDivisao(int);

int main (){
    
    int quantidade;
    scanf ("%d", &quantidade);

    calcularDivisao(quantidade);

    return 0;

}

void calcularDivisao(int quantidade){

    int contador = 1;
    double numero1, numero2;

    while (contador++ <= quantidade){
        
        scanf ("%lf %lf", &numero1, &numero2);

        if (numero2 == 0){
            printf ("divisao impossivel\n");
        }
        else {
            printf ("%.1lf\n", (numero1 / numero2));
        }
    }
}