#include <stdio.h>

void calcularQuantidadeExperiencia(int);

int main (){

    int quantidadeCasos;
    scanf ("%d", &quantidadeCasos);

    calcularQuantidadeExperiencia (quantidadeCasos);

    return 0;
}

void calcularQuantidadeExperiencia(int quantidadeCasos){

    int contador = 0, total_ratos = 0, total_sapos = 0, total_coelhos = 0, quantidade_animal; 
    double total_animais = 0;
    char tipo_animal;

    while (++contador <= quantidadeCasos){
        scanf ("%d %c", &quantidade_animal, &tipo_animal);
        
        switch (tipo_animal){
            case 'C':
            case 'c':
                total_coelhos += quantidade_animal;
                break;
            case 'S':
            case 's':
                total_sapos += quantidade_animal;
                break;
            case 'R':
            case 'r':
                total_ratos += quantidade_animal;
                break;
        }
    }

    total_animais = (total_coelhos + total_ratos + total_sapos);

    printf ("Total: %.0lf cobaias\n", total_animais);
    printf ("Total de coelhos: %d\n", total_coelhos);
    printf ("Total de ratos: %d\n", total_ratos);
    printf ("Total de sapos: %d\n", total_sapos);
    printf ("Percentual de coelhos: %.2lf %%\n", (total_coelhos / total_animais * 100));
    printf ("Percentual de ratos: %.2lf %%\n", (total_ratos / total_animais * 100));
    printf ("Percentual de sapos: %.2lf %%\n", (total_sapos / total_animais * 100));
}