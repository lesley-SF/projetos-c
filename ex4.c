#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

Fa�a um programa que l� um n�mero n e imprima os
 valores entre 2 e n, que s�o divisores de n.

*/

int main()
{



 setlocale(LC_ALL, "");

    int n;

    printf("Digite um n�mero \n");
    scanf("%i", &n);

    for(int i = 2; i <= n ; i++){


        if( i % n == 0){
            printf("%i � divisivel por %i \n ", i, n);

        }
    }




    return 0;
}
