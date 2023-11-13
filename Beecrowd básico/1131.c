#include <stdio.h>

void retornarResultado();

int main (){
    
    retornarResultado();
    return 0;
}

void retornarResultado(){
    int golsInter, golsGremio, vitoriasInter = 0, vitoriasGremio = 0, empate = 0, total = 1, escolha;
    scanf ("%d %d", &golsInter, &golsGremio);

    if (golsInter > golsGremio){
        ++vitoriasInter;
    }
    if (golsGremio > golsInter){
        ++vitoriasGremio;
    }
    if (golsGremio == golsInter){
        ++empate;
    }

    printf ("Novo grenal (1-sim 2-nao)\n");
    scanf ("%d", &escolha);

    while (escolha != 2){
        scanf ("%d %d", &golsInter, &golsGremio);
        
        if (golsInter > golsGremio){
        ++vitoriasInter;
        }
        if (golsGremio > golsInter){
        ++vitoriasGremio;
        }
        if (golsGremio == golsInter){
        ++empate;
        }

        ++total;

        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d", &escolha);
    }

    printf ("%d grenais\n", total);
    printf ("Inter:%d\n", vitoriasInter);
    printf ("Gremio:%d\n", vitoriasGremio);
    printf ("Empates:%d\n", empate);
    
    if (vitoriasInter > vitoriasGremio){
        printf ("Inter venceu mais\n");
    }
    else {
        printf ("Gremio venceu mais\n");
    }
}