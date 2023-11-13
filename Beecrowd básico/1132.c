#include <stdio.h>

void calcularMultiplos (int, int);

int main (){
    int x, y;
    scanf ("%d %d", &x, &y);

    calcularMultiplos(x, y);
    return 0;
}

void calcularMultiplos (int a, int b){

    int soma = 0, maior, menor;

    if (a > b){
        maior = a;
        menor = b;
        
        if (menor <= maior){ 
            while (menor <= maior){
                if (menor % 13 != 0){
                    soma += menor;
                }
            menor++;    
            }
    }
    }

    if (a < b){
        while (a <= b){
            if (a % 13 != 0){
                soma += a;
            }
        a++; 
        }
    }
    
    if (a == b){
        if (a % 13 != 0){
            soma = a;
        }
    }

    printf ("%d\n", soma);
}