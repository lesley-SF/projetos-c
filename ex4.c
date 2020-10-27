#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

Faça um programa que lê um número n e imprima os
 valores entre 2 e n, que são divisores de n.

*/

int main()
{



 setlocale(LC_ALL, "");

    int n;

    printf("Digite um número \n");
    scanf("%i", &n);

    for(int i = 2; i <= n ; i++){


        if( i % n == 0){
            printf("%i é divisivel por %i \n ", i, n);

        }
    }




    return 0;
}
