#include <stdio.h>

int main()
{
	int x, y, i;
	int soma = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	i = y + 1;
	
	if (x != y) {
		while (i != x) {
			if (i % 2 != 0)
				soma = soma + i;
			i++;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}

