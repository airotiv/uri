#include <stdio.h>

int main()
{
	float nota, aux = 0, media = 0;
	
	while (aux != 2) {
		scanf("%f", &nota);
		if (nota <= 10 && nota >= 0) {
			media += nota;
			aux++;
		} else {
			printf("nota invalida\n");		
		}
	}
	
	printf("media = %.2f\n", media/2);
	
	return 0;
}

