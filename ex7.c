#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

Considere o programa para determinar se uma sequ�ncia de
n n�meros digitados pelo usu�rio est� ordenado ou n�o.
Fa�a o programa usando uma vari�vel contadora.


*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, ultimoN = 0, contadora = 0;

    printf("Digite um numero\n");

    scanf("%i", &n);

    for(int i = 1; i <= n; i++){

        int numero;

        printf("Digite um n�mero \n");
        scanf("%i", &numero);

        if( numero > ultimoN){

            contadora++;

        }
        ultimoN = numero;

    }

    if (n == contadora){
        printf("Esta em ordem crescente \n");

    }else{
        printf("N�o esta em ordem crescente");

    }











    return 0;
}
