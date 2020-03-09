#include <stdio.h>

int main()
{
	int num, pares = 0, i = 0;
	
	while (i < 5) {
		scanf("%d", &num);
		if (num % 2 == 0)
			pares++;
		i++;
	}
	
	printf("%d valores pares\n", pares);
	
	return 0;
}

