#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que imprima um menu de 4 pratos na tela e uma quinta op��o para sair do pro-
grama. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhido
a quinta op��o.
*/

int main()
{
setlocale(LC_ALL, "");
int opcao = 0;

do{
// Mostra o card�pio ao usu�rio.
        printf("******** CARD�PIO LESLEY ********\n");
        printf("1- BOLO DE CHOCOLATE COM FUB�\n");
        printf("2- BOLO DE CHOCOLATE COM MORANGO \n");
        printf("3- BOLO DE CHOCOLATE BRANCO\n");
        printf("4- BOLO DE CHOCOLATE COM AMENDOIN\n");
        printf("5- SAIR\n");
        printf("*********************************\n");
        printf(" Escolha uma das op��es acima \n");

//L� a op��o que o usu�rio digitou.
    scanf("%i", &opcao);
//Verifica qual foi a op��o selecionada/digitada.
    switch(opcao){
        case 1:
            printf ("BOLO DE CHOCOLATE COM FUB� SELECIONADO \n\n\n");
            break;
        case 2:
            printf ("BOLO DE CHOCOLATE COM MORANGO SELECIONADO \n\n\n");
            break;
        case 3:
            printf ("BOLO DE CHOCOLATE BRANCO SELECIONADO \n\n\n");
            break;
        case 4:
            printf ("BOLO DE CHOCOLATE COM AMENDOIN SELECIONADO \n\n\n");
            break;
        case 5:
            printf ("VOC� SAIU \n\n\n");
            break;
//Caso o usu�rio digitra qualquer n�mero que n�o esteja entre 1 e 5.
            default:
                printf("OP��O INVALIDA \n\n\n");
            break;
    }
//Repete o card�pio enquanto for digitado 1,2,3 ou 4.
}while(opcao < 5 && opcao >= 1);

    return 0;
}
