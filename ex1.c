#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do pro-
grama. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhido
a quinta opção.
*/

int main()
{
setlocale(LC_ALL, "");
int opcao = 0;

do{
// Mostra o cardápio ao usuário.
        printf("******** CARDÁPIO LESLEY ********\n");
        printf("1- BOLO DE CHOCOLATE COM FUBÁ\n");
        printf("2- BOLO DE CHOCOLATE COM MORANGO \n");
        printf("3- BOLO DE CHOCOLATE BRANCO\n");
        printf("4- BOLO DE CHOCOLATE COM AMENDOIN\n");
        printf("5- SAIR\n");
        printf("*********************************\n");
        printf(" Escolha uma das opções acima \n");

//Lê a opção que o usuário digitou.
    scanf("%i", &opcao);
//Verifica qual foi a opção selecionada/digitada.
    switch(opcao){
        case 1:
            printf ("BOLO DE CHOCOLATE COM FUBÁ SELECIONADO \n\n\n");
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
            printf ("VOCÊ SAIU \n\n\n");
            break;
//Caso o usuário digitra qualquer número que não esteja entre 1 e 5.
            default:
                printf("OPÇÃO INVALIDA \n\n\n");
            break;
    }
//Repete o cardápio enquanto for digitado 1,2,3 ou 4.
}while(opcao < 5 && opcao >= 1);

    return 0;
}
