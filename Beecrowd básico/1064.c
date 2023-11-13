#include <stdio.h>

void calcularPositivoEMedia ();

int main (){

    calcularPositivoEMedia ();
    return 0;

}

void calcularPositivoEMedia (){
    
    int contador = 0, positivos = 0;
    double numero, total = 0, media;

    while (contador < 6){
        scanf ("%lf", &numero);
        getchar ();

        if (numero > 0){
            positivos += 1;
            total += numero;
        }
        contador += 1;
    }
    media = total / positivos;

    printf ("%d valores positivos\n", positivos);
    printf ("%.1lf\n", media);
}