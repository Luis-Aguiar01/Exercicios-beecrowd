#include <stdio.h>


void calculoQuadrante (double A, double B);

int main (){
    double A, B;
    scanf ("%lf %lf", &A, &B);
    calculoQuadrante (A, B);
    return 0;
}

void calculoQuadrante (double A, double B){

    if (A > 0 && B > 0){
        printf ("Q1\n");
    }
    else if (A > 0 && B < 0){
        printf ("Q4\n");
    }
    else if (A < 0 && B > 0){
        printf ("Q2\n");
    }
    else if (A < 0 && B < 0){
        printf ("Q3\n");
    }
    else if (A == 0 && B == 0){
        printf ("Origem\n");
    }
    else if (A == 0 && B != 0){
        printf ("Eixo Y\n");
    }
    else if (A != 0 && B == 0){
        printf ("Eixo X\n");
    }
}