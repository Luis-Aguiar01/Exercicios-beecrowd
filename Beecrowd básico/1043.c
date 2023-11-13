#include <stdio.h>

void calculoTriangulo (double a, double b, double c);

int main (){
    double a, b, c;
    scanf ("%lf %lf %lf", &a, &b, &c);
    calculoTriangulo (a, b, c);
    return 0;
}

void calculoTriangulo (double a, double b, double c){
    
    if (a + b > c && c + b > a && a + c > b){
        printf ("Perimetro = %.1lf\n", (a + b + c));
    }
    else {
        printf ("Area = %.1lf\n", ((a + b) * c / 2));
    }
}