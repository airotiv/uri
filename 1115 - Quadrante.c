#include <stdio.h>

int main()
{
	int x, y, aux = 1;
	
	while (aux) {
		scanf("%d %d", &x, &y);
		
		if (x == 0 || y == 0) {
			aux = 0;
		}
		else {
			if (x > 0 && y > 0)
				printf("primeiro\n");
			else {
				if (x < 0 && y > 0)
					printf("segundo\n");
				else { 
					if (x < 0 && y < 0)
						printf("terceiro\n");
					else 
						printf("quarto\n");
				}
			}
		}
	}
	
	return 0;
}

