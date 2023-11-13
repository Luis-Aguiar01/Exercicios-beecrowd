#include <stdio.h>

void calcularPares ();

int main (){

    calcularPares ();
    return 0;
}

void calcularPares (){
    
    int contador = 0, numero, pares = 0;

    while (contador < 5){
        scanf ("%d", &numero);

        if (numero % 2 == 0){
            pares += 1;
        }
        
        contador += 1;
    }
    
    printf ("%d valores pares\n", pares);
}