#include <stdio.h>

double calculoConsumo (int X, double Y);

int main (){
    int X;
    double Y;
    scanf ("%d %lf", &X, &Y);
    printf ("%.3lf km/l\n", calculoConsumo(X, Y));
    return 0;
}

double calculoConsumo (int X, double Y){
    return X / Y;
}