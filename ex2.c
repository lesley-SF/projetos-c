#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que lê dois números inteiros positivos a e b.
Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.
.
*/

int main()
{
    int resultado = 0;

    resultado = calculo_potencia (50,3);

    printf("%i", resultado);

    return 0;
}

int calculo_potencia (int base,int expoente){

    int multiplicacao = 1;

    for(int i = 1; i <= expoente; i++){

        multiplicacao = base * multiplicacao;
    }
    return multiplicacao;


}
