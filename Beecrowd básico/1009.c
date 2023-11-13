#include <stdio.h>

double calculoSalario (double salarioFixo, double totalVendas);

int main (){
    double salarioFixo, totalVendas;
    char nome[40];
    scanf ("%s %lf %lf", &nome, &salarioFixo, &totalVendas);
    printf ("TOTAL = R$ %.2lf\n", calculoSalario(salarioFixo, totalVendas));
    return 0;
}

double calculoSalario (double salarioFixo, double totalVendas){
    return salarioFixo + (totalVendas * 15 / 100);
}