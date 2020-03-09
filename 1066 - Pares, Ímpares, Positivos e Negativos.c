#include <stdio.h>

int main()
{
	int par = 0, impar = 0, positivo = 0, negativo = 0, i = 0;
	int num;
	while (i < 5) {
		scanf("%d", &num);
		
		if(num % 2 == 0)
			par++;
		else impar++;
		
		if(num < 0)
			negativo++;
		else 
			if (num > 0)
				positivo++;
		
		i++;
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0;
}

