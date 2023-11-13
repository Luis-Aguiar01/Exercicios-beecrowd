#include <stdio.h>

void retornarValor ();

int main (){

    retornarValor();

    return 0;

}

void retornarValor (){

    int I = 1, J = 7;
    
    while (I <= 9){
        printf ("I=%d J=%d\n", I, J);
        printf ("I=%d J=%d\n", I, --J);
        printf ("I=%d J=%d\n", I, --J);
        J = 7;
        I += 2;
    }
}