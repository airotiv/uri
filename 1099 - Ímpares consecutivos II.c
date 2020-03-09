#include <stdio.h>

int main()
{
	int x, y, n, i, soma_impares, aux;
	
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		soma_impares = 0;
		scanf("%d %d", &x, &y); //recebe caso de teste
		if (x == y) {
			
		}
		else {
			if (x > y) {
				aux = x - 1;
				while (aux != y) {					
					if (aux % 2)
						soma_impares += aux;
				aux--; 
				}
				
			} 
			else {
				aux = x + 1;
				while (aux != y) {
					if (aux % 2)
						soma_impares += aux;
					aux++;
				}
			}			
		}
	printf("%d\n", soma_impares);
	
	}
	
	return 0;
}

