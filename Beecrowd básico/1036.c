#include <stdio.h>
#include <math.h>


void calculoBaskhara (double A, double B, double C);

int main (){
    double A, B, C;
    scanf ("%lf %lf %lf", &A, &B, &C);
    calculoBaskhara (A, B, C);
}

void calculoBaskhara (double A, double B, double C){
    double delta, R1, R2;

    delta = pow(B, 2) - (4 * A * C);

    if (delta >= 0 && A != 0){
        R1 = ((-B) + sqrt(delta)) / (2 * A);
        R2 = ((-B) - sqrt(delta)) / (2 * A);
        printf ("R1 = %.5lf\n", R1);
        printf ("R2 = %.5lf\n", R2);
    }
    else{
        printf ("Impossivel calcular\n");
    }
}