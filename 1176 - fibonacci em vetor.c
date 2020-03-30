#include <stdio.h>

int main() {

    unsigned long long int vetor_fibonacci[61];
    int i;
    int casos_de_teste, n;

    vetor_fibonacci[0] = 0;
    vetor_fibonacci[1] = 1;

    for (i = 2; i < 61; i++)
    {
        vetor_fibonacci[i] = vetor_fibonacci[i-1] + vetor_fibonacci[i-2];
    }
    
    scanf("%d", &casos_de_teste);

    while(casos_de_teste) {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, vetor_fibonacci[n]);
        casos_de_teste--;
    }

    return 0;
}