#include <stdio.h>

void MandarMensagem ();

int main (){

    MandarMensagem ();
    return 0;

}

void MandarMensagem (){

    int numero1, numero2;

    scanf ("%d %d", &numero1, &numero2);

    while (numero1 != numero2){
        
        if (numero1 > numero2){
            printf ("Decrescente\n");
        }
        else if (numero2 > numero1){
            printf ("Crescente\n");
        }
        scanf ("%d %d", &numero1, &numero2);
    }
}