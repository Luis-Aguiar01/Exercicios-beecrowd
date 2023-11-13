#include <stdio.h>
#include <math.h>

double calculoArea (double raio, double pi);

int main (){
    double raio;
    const double pi = 3.14159;
    scanf ("%lf", &raio);
    printf ("A=%.4lf\n", calculoArea(raio, pi));
    return 0;
}

double calculoArea (double raio, double pi){
    return pi * pow(raio,2);
}