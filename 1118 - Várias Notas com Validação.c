#include <stdio.h>

int main()
{
	float nota, aux, media;
	int calculo = 1;
	
	while (calculo == 1) {
		aux = 0;
		media = 0;
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
		calculo = -1;
		while (calculo < 1 || calculo > 2) {
			printf("novo calculo (1-sim 2-nao)\n");		
			scanf("%d", &calculo);
		}
	}
	
	return 0;
}

