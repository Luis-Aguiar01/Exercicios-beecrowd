#include <stdio.h>

int calculoDistancia (int distancia);

int main (){
    int distancia;
    scanf ("%d", &distancia);
    printf ("%d minutos\n", calculoDistancia (distancia));
    return 0;
}

int calculoDistancia (int distancia){
    return distancia * 2;  
}