#include <stdio.h>

double calculoValor (int numero1, double preco1, int numero2, double preco2);

int main (){
    int codigo1, codigo2, numero1, numero2;
    double preco1, preco2;
    scanf ("%d %d %lf", &codigo1, &numero1, &preco1);
    scanf ("%d %d %lf", &codigo2, &numero2, &preco2);
    printf ("VALOR A PAGAR: R$ %.2lf\n", calculoValor(numero1, preco1, numero2, preco2));
    return 0;
}

double calculoValor (int numero1, double preco1, int numero2, double preco2){
    return (numero1 * preco1) + (numero2 * preco2);
}