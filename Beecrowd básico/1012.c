#include <stdio.h>

void calculoResultado (double A, double B, double C);

int main (){
    double A, B, C;
    scanf ("%lf %lf %lf", &A, &B, &C);
    calculoResultado (A, B, C);
}

void calculoResultado (double A, double B, double C){
    printf ("TRIANGULO: %.3lf\n", (A * C / 2));
    printf ("CIRCULO: %.3lf\n", (3.14159 * C * C));
    printf ("TRAPEZIO: %.3lf\n", ((A + B) * C / 2));
    printf ("QUADRADO: %.3lf\n", (B * B));
    printf ("RETANGULO: %.3lf\n", (A * B));
}
