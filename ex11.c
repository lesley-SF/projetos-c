#include <stdio.h>
#include <stdlib.h>

/*

Escreva um programa para ler n de números do tipo float e
imprimir quantos deles estão nos seguintes intervalos:
[0 . . . 25], [26 . . . 50], [51 . . . 75] e [76 . . . 100].
Por exemplo, para n = 10 e os seguintes dez números
2.0, 61.5, −1.0, 0.0, 88.7, 94.5, 55.0, 3.1415, 25.5, 75.0,
seu programa deve imprimir:

Intervalo [0..25]: 3
Intervalo [26..50]: 0
Intervalo [51..75]: 3
Intervalo [76..100]: 2

*/


int main()
{
    int n, contA = 0, contB = 0, contC = 0, contD = 0;
    printf("Digite quantos numeros devem ser lidos \n");
    scanf("%i", &n);

    for( int i = 1; i <= n; i++){

        float numero;

        printf("Digite um numero \n");
        scanf("%f", &numero);

        if(numero >= 0 && numero <= 25){
            contA++;
        }else if(numero >= 26 && numero <= 50 ){
            contB++;
        }else if(numero >= 51 && numero <= 75){
            contC++;
        }else if(numero >= 76 && numero <= 100){
            contD++;
        }
    }
    printf("Intervalo [0..25]: %i \n", contA);
    printf("Intervalo [26..50]: %i \n", contB);
    printf("Intervalo [51..75]: %i \n", contC);
    printf("Intervalo [76..100]: %i \n", contD);

    return 0;
}















