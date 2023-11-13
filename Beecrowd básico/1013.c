#include <stdio.h>
#include <math.h>

int calculoMaior (int A, int B, int C);

int main (){
    int A, B, C;
    scanf ("%d %d %d", &A, &B, &C);
    printf ("%d eh o maior\n", calculoMaior(A, B, C));
    return 0;
}

int calculoMaior (int A, int B, int C){
    int maiorAB = (A + B + abs(A - B)) / 2;
    return (maiorAB + C + abs(maiorAB - C)) / 2;
}