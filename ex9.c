#include <stdio.h>
#include <stdlib.h>

/*

Escreva um programa que lê um número n, e então imprime
o menor número primo que é maior ou igual n, e imprime
o maior primo que é menor ou igual a n.

*/


int main()
{
    int n, contadora = 0;

    printf("Digite um numero\n");
    scanf("%i", &n);
    contadora = n;

    do {
        int resposta = eh_primo(contadora);
        if(resposta == 1){
            printf("eh primo: %i \n", contadora);
            break;
        }
        contadora++;
    }while(1 == 1);

    contadora = n;

    do {
        int resposta = eh_primo(contadora);
        if(resposta == 1){
            printf("eh primo: %i \n", contadora);
            break;
        }
        contadora--;
    }while(1 == 1);



    return 0;
}
int eh_primo(int num){

    int i, resultado = 0;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            resultado++;
            break;
        }
    }

    if(resultado == 0){
        return 1;
    }else{
        return 0;
    }
}
