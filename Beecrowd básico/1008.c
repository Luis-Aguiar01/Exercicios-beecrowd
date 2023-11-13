#include <stdio.h>

double calculoSalario (int qtdeHoras, double valorHora);

int main (){
    int numero, qtdeHoras;
    double valorHora;
    scanf ("%d %d %lf", &numero, &qtdeHoras, &valorHora);
    printf ("NUMBER = %d\n", numero);
    printf ("SALARY = U$ %.2lf\n", calculoSalario(qtdeHoras, valorHora));
    return 0;
}

double calculoSalario (int qtdeHoras, double valorHora){
    return qtdeHoras * valorHora;
}