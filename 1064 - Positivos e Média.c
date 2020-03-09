#include <stdio.h>

int main()
{
	int positivos = 0, i = 0;
	float soma = 0, vet[6];
	while (i < 6) {
		scanf("%f", &vet[i]); 
		if (vet[i] >= 0) {
			soma = soma + vet[i];
			positivos++;
		}
		i++;
	}
	
	printf("%d valores positivos\n", positivos);
	printf("%.1f\n", soma/positivos);
	return 0;
}

