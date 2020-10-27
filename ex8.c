#include <stdio.h>
#include <stdlib.h>


/*

Faça um programa em C que calcule o máximo divisor
comum de dois números m, n. Você deve utilizar a
seguinte regra do cálculo do mdc com m ≥ n

mdc(m, n) = m se n = 0
mdc(m, n) = mdc(n, m%n) se n > 0

*/


int main(){

    int a = 35, b = 15;

    int num_mdc = mdc(a,b);

    printf("O mdc de %i e %i eh: %i \n", a, b, num_mdc);

    return 0;
}


int mdc(int a, int b){

    int menor = menor_num(a,b);

    for(int i = menor; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int menor_num(int a, int b){
    int menor;
    if (a < b){
        menor = a;
    }else{
        menor = b;
    }
    return menor;
}




