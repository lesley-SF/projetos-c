#include <stdio.h>
#include <stdlib.h>

/*

Fa�a um programa que l� um n�mero n e imprima os valores
X
j
i=1
i
para j de 1 at� n, um valor por linha.

*/

int main()
{
    int n;

    printf("Digite um numero \n");
    scanf("%i", &n);

    for (int j = 1; j <= n; j++){

        int resultado = 0;

        for(int i = j; i <= n; i++){
            resultado = i + resultado;
            printf("%i ", i);
        }

        printf("= %i \n", resultado);
    }

    return 0;
}
