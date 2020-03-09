#include <stdio.h>

int main()
{
	int v[100], maior, i, posicao;
	
	for (i = 0; i < 100; i++) {
		scanf("%d", &v[i]);
		if (i == 0) 
			maior = v[i];
		if (v[i] > maior) {
			posicao = i + 1;
			maior = v[i];
		}			
	}
	
	printf("%d\n", maior);
	printf("%d\n", posicao);
	
	return 0;
}

