#include <stdio.h>

void somarSequencia();

int main (){

    somarSequencia();
    return 0;
}

void somarSequencia(){
    int m, n, soma = 0;
    scanf ("%d %d", &m, &n);

    while (m > 0 && n > 0){
        
        if (m < n){ /*1 10*/
            soma = 0;
            while (m <= n){
                printf ("%d ", m);
                soma += m;
                ++m;
            } 
        printf ("Sum=%d\n", soma);     
        }
        else if (m > n){
            soma = 0;
            while (n <= m){
                printf ("%d ", n);
                soma += n;
                ++n;
            }
        printf ("Sum=%d\n", soma);    
        }
        else if (m == n){
            soma = 0;
            printf ("%d ", m);
            soma += m;
            printf ("Sum=%d\n", soma);
        }
        scanf ("%d %d", &m, &n);
    }
}