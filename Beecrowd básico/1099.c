#include <stdio.h>

void calcularImpares (int);

int main (){
    
    int totalCasos;
    scanf ("%d", &totalCasos);

    calcularImpares (totalCasos);
    return 0;
}

void calcularImpares (int totalCasos){

    int contador = 0, numero1, numero2, totalImpares = 0;

    while (contador++ < totalCasos){
        
        scanf ("%d %d", &numero1, &numero2);

        if (numero1 == numero2 && numero2 == numero1){
            printf ("%d\n", totalImpares);
        }    
    
        if (numero1 < numero2){
            
            while (++numero1 < numero2){
                
                if (numero1 % 2 != 0){
                    totalImpares += numero1;
                }
            }
            
            printf ("%d\n", totalImpares);
            totalImpares = 0;
        }
        
        if (numero1 > numero2){

            while (++numero2 < numero1){
                
                if (numero2 % 2 != 0){
                    totalImpares += numero2;
                }
            
            }
            
            printf ("%d\n", totalImpares);
            totalImpares = 0;
        }
    }
}