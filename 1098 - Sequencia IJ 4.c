#include <stdio.h>

int main()
{
	double i, j, aux;
	aux = 1;
	
	for (i = 0; i < 3; i += 0.2) {
		for (j = aux; j <= (aux + 2); j++) {
			if (i % 10.0) 
				printf("I=%.1f J=%.1f\n", i, j);
			else
				printf("I=%.0f J=%.0f\n", i, j);		
		}
		aux += 0.2;
	}
	
	return 0;
}

