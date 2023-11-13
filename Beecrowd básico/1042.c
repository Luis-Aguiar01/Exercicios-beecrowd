#include <stdio.h>

void ordenarNumeros (int a, int b, int c);

int main (){
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    ordenarNumeros (a, b , c);
    return 0;
}

void ordenarNumeros (int a, int b, int c){

    int n1, n2, n3;
    
    if (a <= b && a <= c){
        n1 = a;
    }
    else if (b <= a && b <= c){
        n1 = b;
    }
    else if (c <= a && c <= b){
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

    if (a >= b && a >= c){
        n3 = a;
    }
    else if (b >= a && b >= c){
        n3 = b;
    }
    else if (c >= a && c >= b){
        n3 = c;
    }

    printf ("%d\n", n1);
    printf ("%d\n", n2);
    printf ("%d\n", n3);
    printf ("\n");
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
}
