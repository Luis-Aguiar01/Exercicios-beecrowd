#include <stdio.h>

void calculoValor (double valor);

int main (){
    double valor;
    scanf ("%lf", &valor);

}

void calculoValor (double valor){

    int notas, moedas;

    printf ("NOTAS:\n");

    notas = (int)valor / 100;
    printf ("%d nota(s) de R$ 100.00\n", notas);
    valor -= notas * 100;

    notas = valor / 50;
    printf ("%d nota(s) de R$ 50.00\n", notas);
    valor -= notas * 50;

    notas = valor / 20;
    printf ("%d nota(s) de R$ 20.00\n", notas);
    valor -= notas * 20;

    notas = valor / 10;
    printf ("%d nota(s) de R$ 10.00\n", notas);
    valor -= notas * 10;

    notas = valor / 5;
    printf ("%d nota(s) de R$ 5.00\n", notas);
    valor -= notas * 5;

    notas = valor / 2;
    printf ("%d nota(s) de R$ 2.00\n", notas);
    valor -= notas * 2;

    printf ("MOEDAS:\n");

    moedas = (int)(valor * 100);
}