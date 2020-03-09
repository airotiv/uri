#include <stdio.h>
//Pesos 2, 3, 5
int main()
{
	int n;
	float valor1, valor2, valor3;
	 
	scanf("%d", &n);
			
	while (n) {
		scanf("%f", &valor1);
		scanf("%f", &valor2);
		scanf("%f", &valor3);
		
		printf("%.1f\n", ( (2 * valor1) + (3 * valor2) + (5 * valor3) ) / 10 );
		n--;
	}
	
	return 0;
}

