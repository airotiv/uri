#include <stdio.h>

int main()
{
	int n, i = 2;
	
	scanf("%d", &n);
	
	while (i < 10000) {
		if (i % n == 2)
			printf("%d\n", i);
		i++;
	}
	
	return 0;
}

