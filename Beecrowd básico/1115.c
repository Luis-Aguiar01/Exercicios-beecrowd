#include <stdio.h>

void determinarCoordenadas(int, int);

int main (){

    int x, y;
    scanf ("%d %d", &x, &y);

    determinarCoordenadas(x, y);
    return 0;

}

void determinarCoordenadas(int x, int y){

    while (x != 0 && y != 0){
        
        if (x > 0 && y > 0){
            printf ("primeiro\n");
        }

        if (x < 0 && y < 0){
            printf ("terceiro\n");
        }

        if (x > 0 && y < 0){
            printf ("quarto\n");
        }

        if (x < 0 && y > 0){
            printf ("segundo\n");
        }

        scanf ("%d %d", &x, &y);
    }
}