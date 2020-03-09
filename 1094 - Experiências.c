//3 tipos de cobaias: sapos, ratos e coelhos
#include <stdio.h>

int main()
{
	int n, quantia, n_coelhos = 0, n_ratos = 0, n_sapos = 0;
	float total = 0;
	char cobaia;
	
	scanf("%d", &n); //numero de casos de teste
	
	while (n) {
		scanf("%d %c", &quantia, &cobaia);
		total = total + quantia;
		
		if (cobaia == 'C')
			n_coelhos = n_coelhos + quantia;
		else
			if (cobaia == 'R')
				n_ratos = n_ratos + quantia;
			else
				if (cobaia == 'S')
					n_sapos = n_sapos + quantia;		
		n--;
	}
	
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %d\n", n_coelhos);
	printf("Total de ratos: %d\n", n_ratos);
	printf("Total de sapos: %d\n", n_sapos);
	printf("Percentual de coelhos: %.2f %%\n", (n_coelhos/total) * 100);
	printf("Percentual de ratos: %.2f %%\n", (n_ratos/total) * 100);
	printf("Percentual de sapos: %.2f %%\n", (n_sapos/total) * 100);
	
	return 0;
}

