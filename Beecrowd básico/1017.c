#include <stdio.h>

double gastoCombustivel (double tempoGasto, double velocidadeMedia);

int main (){
    double tempoGasto, velocidadeMedia;
    scanf ("%lf %lf", &tempoGasto, &velocidadeMedia);
    printf ("%.3lf\n", gastoCombustivel (tempoGasto, velocidadeMedia));
    return 0;
}

double gastoCombustivel (double tempoGasto, double velocidadeMedia){
    return velocidadeMedia * tempoGasto / 12;
}