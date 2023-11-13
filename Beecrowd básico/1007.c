#include <stdio.h>

int calculoDiferenca (int A, int B, int C, int D);

int main (){
    int A, B, C, D;
    scanf ("%d %d %d %d", &A, &B, &C, &D);
    printf ("DIFERENCA = %d\n", calculoDiferenca(A, B, C, D));
    return 0;
}

int calculoDiferenca (int A, int B, int C, int D){
    return (A * B - C * D);
}