#include <stdio.h>

void calcularIntervalo (int valor);

int main (){
    int valor;
    scanf ("%d", &valor);

    calcularIntervalo (valor);
    return 0;
}

void calcularIntervalo (int valor){
    int contador = 0, numero, dentro_intervalo, fora_intervalo;

    while (contador < valor){
        scanf ("%d", &numero);
        getchar();
        
        if (numero >= 10 && numero <= 20){
            dentro_intervalo += 1;
        }
        else{
            fora_intervalo += 1;
        }
        
        contador += 1;
    }
    printf ("%d in\n", dentro_intervalo);
    printf ("%d out\n", fora_intervalo);
}