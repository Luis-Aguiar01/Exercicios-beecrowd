#include <stdio.h>

void retornarFormatacao();

int main (){

    retornarFormatacao();
    return 0;
}

void retornarFormatacao(){

    double I = 0, J = 1, contador = 1, taxa;
    int I1 = 0, J1 = 1, quantidade = 1;

    while (I < 2){
        
        if (contador == 1){
            printf ("I=%d J=%d\n", I1, J1);
            printf ("I=%d J=%d\n", I1, ++J1);
            printf ("I=%d J=%d\n", I1, ++J1);
        }    

        if (contador != 1 && quantidade != 6 && quantidade != 11){
            printf ("I=%.1lf J=%.1lf\n", I, J);
            printf ("I=%.1lf J=%.1lf\n", I, ++J);
            printf ("I=%.1lf J=%.1lf\n", I, ++J);
        }
        
        if (quantidade == 6 || quantidade == 11){
            printf ("I=%.0lf J=%.0lf\n", I, J);
            printf ("I=%.0lf J=%.0lf\n", I, ++J);
            printf ("I=%.0lf J=%.0lf\n", I, ++J);
        }

        taxa = 0.2 * quantidade;
        ++contador;
        I += 0.2;
        J = 1;
        J += taxa;
        ++quantidade;
    }
}