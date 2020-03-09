#include <stdio.h>

int main()
{
	int m = 1, n = 1, aux, soma;
	
	while (1) {		
		scanf("%d %d", &m, &n);
		if (m > 0 && n > 0) {
			soma = 0;
			if (m == n) {
				printf("%d Sum=%d", m, m);
			}
			else {
				if (m > n) {
					aux = n;				
					while (aux <= m) {
						soma = soma + aux;
						printf("%d ", aux);
						aux++;
					}
					printf("Sum=%d\n", soma);
				}
				else {
					aux = m;
					while (aux <= n) {
						soma = soma + aux;
						printf("%d ", aux);
						aux++;					
					}
					printf("Sum=%d\n", soma);
				}
			}
		} else break;
	} 	
	
	return 0;
}

