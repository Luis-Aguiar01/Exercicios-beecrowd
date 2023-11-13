#include <stdio.h>

void validarNotas();

int main (){
    int escolha = 1;
    
    validarNotas ();

    while (escolha != 2){
        validarNotas();
        printf ("novo calculo (1-sim 2-nao)\n");
        scanf ("%d", &escolha);
        
        while (escolha != 2 && escolha != 1){
            printf ("novo calculo (1-sim 2-nao)\n");
            scanf ("%d", &escolha);
        }
    }
    
    return 0;
}

void validarNotas(){

    double media, nota1 = 0, nota2 = 0;
    
    scanf ("%lf", &nota1);
    if (nota1 < 0 || nota1 > 10){
        printf ("nota invalida\n");
        
        while (nota1 < 0 || nota1 > 10){
            scanf ("%lf", &nota1);
                
                if (nota1 < 0 || nota1 > 10){
                    printf ("nota invalida\n");
                }
        }
    }

    
    scanf ("%lf", &nota2);

    while (nota2 < 0 || nota2 > 10){
        scanf ("%lf", &nota2);
            if (nota2 < 0 || nota2 > 10){
                printf ("nota invalida\n");
            }
        }
    }
    media = (nota1 + nota2) / 2;
    printf ("media = %.2lf\n", media);

}