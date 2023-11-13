#include <stdio.h>

void calculoMedia (double N1, double N2, double N3, double N4);

int main (){
    double N1, N2, N3, N4;
    scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    calculoMedia (N1, N2, N3, N4);
    return 0;
}

void calculoMedia (double N1, double N2, double N3, double N4){
    double media, exame;

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    printf ("Media: %.1lf\n", media);

    if (media >= 7){
        printf ("Aluno aprovado.\n");
    }
    else if (media < 5){
        printf ("Aluno reprovado.\n");
    }
    else if (media >= 5 && media <= 6.9){
        printf ("Aluno em exame.\n");
        scanf ("%lf", &exame);
        printf ("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
            
            if (media >= 5.0){
                printf ("Aluno aprovado.\n");
                printf ("Media final: %.1lf\n", media);
            }
            else {
                printf ("Aluno reprovado.\n");
                printf ("Media final: %.1lf\n", media);
            }
    }
}
