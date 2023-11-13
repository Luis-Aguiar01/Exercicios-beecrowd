#include <stdio.h>

void retornoSenha (int);

int main (){
    int senha;
    scanf ("%d", &senha);

    retornoSenha (senha);
    return 0;
}

void retornoSenha (int senha){

    if (senha == 2002){
        printf ("Acesso Permitido\n");
    }
    else {
        while (senha != 2002){
        printf ("Senha Invalida\n");
        scanf ("%d", &senha);
    }

    if (senha == 2002){
        printf ("Acesso Permitido\n");
    }    
    }
}