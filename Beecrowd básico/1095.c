#include <stdio.h>

void calcularSequencia ();

int main (){
    
    calcularSequencia ();
    return 0;
}

void calcularSequencia (){

    int I = 1, J = 60;

    printf ("I=%d J=%d\n", I, J);
    
    while (J != 0){
        J -= 5;
        I += 3;
        printf ("I=%d J=%d\n", I, J);
    }
}    