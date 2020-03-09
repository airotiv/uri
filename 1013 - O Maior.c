#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, maior_n1n2;

    scanf("%d%d%d", &n1, &n2, &n3);
    maior_n1n2 = (n1 + n2 + abs(n1 - n2)) / 2;

    printf("%d eh o maior\n", ((maior_n1n2 + n3 + abs(maior_n1n2 - n3)) / 2));

    return 0;
}
