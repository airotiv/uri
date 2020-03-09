#include <stdio.h>

int main()
{
	int i, j, aux;
	aux = 7;
	
	for (i = 1; i < 10; i += 2) {
		for (j = aux; j >= (aux-2); j--) {
			printf("I=%d J=%d\n", i, j);
		}
		aux += 2;
	}
	
	return 0;
}

