#include <stdio.h>

double calculoMedia (double A, double B, double C, double Media);

int main (){
    double A, B, C, Media;
    scanf ("%lf %lf %lf", &A, &B, &C);
    printf ("MEDIA = %.1lf\n", calculoMedia (A, B, C, Media));
    return 0;
}

double calculoMedia (double A, double B, double C, double Media){
    return Media = ((A * 2) + (B * 3) + (C * 5)) / 10;
}