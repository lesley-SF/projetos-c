#include <stdio.h>
#include <stdlib.h>

/*

Fa�a um programa que l� um n�mero n e que compute e imprima o valor

Xn
i=1
i.
OBS: N�o use form�las como a da soma de uma P.A.

*/

int main(){


    int n, somatoria = 0;

    printf("Digite um numero \n");
    scanf("%i", &n);
// Esta realizando a repeti��o somando +1 at� o numero "n".
    for(int i= 1; i <= n; i++){
// "Somat�ria" esta guardando a soma a cada repeti��o.
        somatoria = i + somatoria;

    }
    printf("%i \n", somatoria);
    return 0;

}

