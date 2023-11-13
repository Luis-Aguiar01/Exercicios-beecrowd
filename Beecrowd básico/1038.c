#include <stdio.h>

void calculoTotal (int codigo, int quantidade);

int main (){
    int codigo, quantidade;
    scanf ("%d %d", &codigo, &quantidade);
    calculoTotal (codigo, quantidade);
    return 0;
}


void calculoTotal (int codigo, int quantidade){
    
    double valor, total;
    
    if (codigo == 1){
        valor = 4.00;
        total = valor * quantidade;
        printf ("Total: R$ %.2lf\n", total);
    }
    else if (codigo == 2){
        valor = 4.50;
        total = valor * quantidade;
        printf ("Total: R$ %.2lf\n", total);
    }
    else if (codigo == 3){
        valor = 5.00;
        total = valor * quantidade;
        printf ("Total: R$ %.2lf\n", total);
    }
    else if (codigo == 4){
        valor = 2.00;
        total = valor * quantidade;
        printf ("Total: R$ %.2lf\n", total);
    }
    else if (codigo == 5){
        valor = 1.50;
        total = valor * quantidade;
        printf ("Total: R$ %.2lf\n", total);
    }
}
