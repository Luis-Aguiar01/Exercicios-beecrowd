#include <stdio.h>

double calculoMedia (double A, double B, double Media);

int main (){
    double A, B, Media;
    scanf ("%lf %lf", &A, &B);
    printf ("MEDIA = %.5lf\n", calculoMedia (A, B, Media));
    return 0;
}

double calculoMedia (double A, double B, double Media){
    return Media = ((A * 3.5) + (B * 7.5)) / 11;
}