#include <stdio.h>

int main()
{
	int x, y, aux;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x == y) {
		if (x % 5 == 2 || x % 5 == 3)
			printf("%d\n", x);
	}
	else {
		if (x < y) {
			aux = x + 1;
			while (aux < y) {
				if (aux % 5 == 2 || aux % 5 == 3)
					printf("%d\n", aux);
				aux++;
			}			
		}
		else {
			aux = y + 1;
			while (aux < x) {
				if (aux % 5 == 2 || aux % 5 == 3)
					printf("%d\n", aux);
				aux++;
			}			
		}
		
	}
	return 0;
}

