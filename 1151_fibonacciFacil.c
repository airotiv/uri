/*A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.*/

#include <stdio.h>

int main() {

    int n, i, j, fibo, cont;

    scanf("%d", &n);

    for (cont = 0; cont < n; cont++) {
        if (cont == 0) {
            i = 0;
            printf("%d", i);
        } else {        
            if (cont == 1) {
                j = 1;
                printf(" %d", j);
            } else {
                fibo = i + j;
                i = j;("%d ", i);
                j = fibo;
                printf(" %d", fibo);
            }        
        
        }
    }

    printf("\n");

    return 0;
}