#include <stdio.h>
#include <math.h>


void calculoTriangulo (double a, double b, double c);

int main (){
    double a, b, c;
    scanf ("%lf %lf %lf", &a, &b, &c);
    calculoTriangulo (a, b, c);
    return 0;
}

void calculoTriangulo (double a, double b, double c){

    double n1, n2, n3;

    if (a >= b && a >= c){
        n1 = a;
    }
    else if (b >= a && b >= c){
        n1 = b;
    }
    else if (c >= a && c >= b){
        n1 = c;
    }

    if (a >= b && a <= c || a <= b && a >= c){
        n2 = a;
    }
    else if (b >= a && b <= c || b <= a && b >= c){
        n2 = b;
    }
    else if (c >= a && c <= b || c <= a && c >= b){
        n2 = c;
    }

    if (a <= b && a <= c){
        n3 = a;
    }
    else if (b <= a && b <= c){
        n3 = b;
    }
    else if (c <= a && c <= b){
        n3 = c;
    }

    if (n1 >= n2 + n3){
        printf ("NAO FORMA TRIANGULO\n");
    }else {
        
        if (pow(n1, 2) == pow(n2, 2) + pow(n3, 2)){
            printf ("TRIANGULO RETANGULO\n");
        }
        
        if (pow(n1, 2) > pow(n2, 2) + pow(n3, 2)){
            printf ("TRIANGULO OBTUSANGULO\n");
        }
        
        if (pow(n1, 2) < pow(n2, 2) + pow(n3, 2)){
            printf ("TRIANGULO ACUTANGULO\n");
        }
        
        if (n1 == n2 && n2 == n3){
            printf ("TRIANGULO EQUILATERO\n");
        }
        
        if ((n1 == n2 && n2 != n3) || (n2 == n3 && n1 != n2)){
            printf ("TRIANGULO ISOSCELES\n");
        }
    }
}