#include <stdio.h>

int main()
{
	int impares = 6, x;
	
	scanf("%d", &x);
	
	while (impares != 0) {
		if (x % 2 != 0) {
			printf("%d\n", x);
			impares--;
		}
	x++;
	}
	return 0;
}

