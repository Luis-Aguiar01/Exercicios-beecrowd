#include <stdio.h>

void calculoTempo (int inicio, int fim);

int main (){
    int inicio, fim;
    scanf ("%d %d", &inicio, &fim);
    calculoTempo (inicio, fim);
}

void calculoTempo (int inicio, int fim) {
    int duracao;

        if (inicio == fim){
            duracao = 24;
        }
        else if (inicio > fim){
            duracao = 24 - (inicio - fim);
        }
        else if (inicio < fim){
            duracao = fim - inicio;
        }

    printf ("O JOGO DUROU %d HORA(S)\n", duracao);
}