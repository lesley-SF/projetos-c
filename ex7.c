#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

Considere o programa para determinar se uma sequência de
n números digitados pelo usuário está ordenado ou não.
Faça o programa usando uma variável contadora.


*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, ultimoN = 0, contadora = 0;

    printf("Digite um numero\n");

    scanf("%i", &n);

    for(int i = 1; i <= n; i++){

        int numero;

        printf("Digite um número \n");
        scanf("%i", &numero);

        if( numero > ultimoN){

            contadora++;

        }
        ultimoN = numero;

    }

    if (n == contadora){
        printf("Esta em ordem crescente \n");

    }else{
        printf("Não esta em ordem crescente");

    }











    return 0;
}
