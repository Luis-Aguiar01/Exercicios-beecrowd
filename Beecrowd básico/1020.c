#include <stdio.h>

void calculoIdade (int idade_dias, int anos, int meses, int dias);

int main (){
    int idade_dias, anos, meses, dias;
    scanf ("%d", &idade_dias);
    calculoIdade (idade_dias, anos, meses, dias);
    return 0;
}

void calculoIdade (int idade_dias, int anos, int meses, int dias){
    
    anos = idade_dias / 365;
    idade_dias %= 365;
    meses = idade_dias / 30;
    idade_dias %= 30;
    dias = idade_dias;
    printf ("%d ano(s)\n", anos);
    printf ("%d mes(es)\n", meses);
    printf ("%d dia(s)\n", dias);
}