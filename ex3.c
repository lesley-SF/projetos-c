#include <stdio.h>
#include <stdlib.h>

/*

Faça um programa que lê um número n e que compute e imprima o valor

Xn
i=1
i.
OBS: Não use formúlas como a da soma de uma P.A.

*/

int main(){


    int n, somatoria = 0;

    printf("Digite um numero \n");
    scanf("%i", &n);
// Esta realizando a repetição somando +1 até o numero "n".
    for(int i= 1; i <= n; i++){
// "Somatória" esta guardando a soma a cada repetição.
        somatoria = i + somatoria;

    }
    printf("%i \n", somatoria);
    return 0;

}

