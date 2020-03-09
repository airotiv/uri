#include <stdio.h>

int main()
{
	int x, y, aux, soma = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x == y) {
		if (x % 13)
			printf("%d\n", x);
	}
	else {
		if (x < y) {
			aux = x;
			while (aux <= y) {
				if (aux % 13)
					soma += aux;
				aux++;
			}
			printf("%d\n", soma);
		}
		else {
			aux = y;
			while (aux <= x) {
				if (aux % 13)
					soma += aux;
				aux++;
			}
			printf("%d\n", soma);
		}
		
	}
	
	return 0;
}

