#include <stdio.h>
#include <math.h>

double calculoVolume (double pi, double raio);

int main (){
    const double pi = 3.14159;
    double raio;
    scanf ("%lf", &raio);
    printf ("VOLUME = %.3lf\n", calculoVolume (pi, raio));
    return 0;
}

double calculoVolume (double pi, double raio){
    return (4.0/3.0 * pi * pow(raio,3));
}