#include <stdio.h>

void calculoNovoSalario (double salario);

int main (){
    double salario;
    scanf ("%lf", &salario);
    calculoNovoSalario (salario);
    return 0;     
}

void calculoNovoSalario (double salario) {
    double percentual, novoSalario, aumento;
    int porcentagem;
        
        if (salario > 0.00 && salario <= 400.00){
            percentual = 1.15;
            novoSalario = salario * percentual;
            aumento = novoSalario - salario;
            porcentagem = 15;
        }
        else if (salario > 400.0 && salario <= 800.00){
            percentual = 1.12;
            novoSalario = salario * percentual;
            aumento = novoSalario - salario;
            porcentagem = 12;
        }
        else if (salario > 800.00 && salario <= 1200.00){
            percentual = 1.10;
            novoSalario = salario * percentual;
            aumento = novoSalario - salario;
            porcentagem = 10;
        }    
        else if (salario > 1200.00 && salario <= 2000.00){
            percentual = 1.07;
            novoSalario = salario * percentual;
            aumento = novoSalario - salario;
            porcentagem = 7;
        }
        else if (salario > 2000.00){
            percentual = 1.04;
            novoSalario = salario * percentual;
            aumento = novoSalario - salario;
            porcentagem = 4;
        }
    
    printf ("Novo salario: %.2lf\n", novoSalario);
    printf ("Reajuste ganho: %.2lf\n", aumento);
    printf ("Em percentual: %d %%\n", porcentagem);
}