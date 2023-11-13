#include <stdio.h>

void calcularImpares (int numero);


int main (){
    int numero;
    scanf ("%d", &numero);
    calcularImpares (numero);
    return 0;
}

void calcularImpares (int numero){
    int contador = 0;

    if (numero % 2 != 0) {
        while (contador < 12){

            if (numero % 2 != 0){
                printf ("%d\n", numero);
            }
            numero += 1; 
            contador += 1;
        }
    } 
    else{
        while (contador < 12){
            numero += 1; 
            contador += 1;
            
            if (numero % 2 != 0){
                printf ("%d\n", numero);
            } 
        }
    }   
}