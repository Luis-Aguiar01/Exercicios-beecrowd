#include <stdio.h>

void maiorNumero ();

int main (){

    maiorNumero ();
    return 0;
}

void maiorNumero (){
    int contador = 0, numero, maior = 0, posicao;

    while (++contador <= 100){
        scanf ("%d", &numero);
        if (numero >= maior){
            maior = numero;
            posicao = contador;
        }
    }
    printf ("%d\n", maior);
    printf ("%d\n", posicao);
}