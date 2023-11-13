#include <stdio.h>

void calculoTempo (int tempo, int horas, int minutos, int segundos);

int main (){
    int tempo, horas, minutos, segundos;
    scanf ("%d", &tempo);
    calculoTempo (tempo, horas, minutos, segundos);
    return 0;
}

void calculoTempo (int tempo, int horas, int minutos, int segundos){
    horas = tempo / 3600;
    tempo %= 3600;
    minutos = tempo / 60;
    segundos = tempo % 60;
    printf ("%d:%d:%d\n", horas, minutos, segundos);
}