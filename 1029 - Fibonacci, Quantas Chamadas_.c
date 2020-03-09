#include <stdio.h>

int fibo ( int n, int *nchamadas ){
	*nchamadas = *nchamadas + 1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	
	return fibo(n-1, nchamadas) + fibo (n-2, nchamadas);
}

int main() {
 	int c, N, i, valor, resultado;
 	
 	scanf("%d", &N);
 	for(i = 0; i < N; i++){
 		scanf ("%d", &valor);
 		c = 0;
 		resultado = fibo(valor, &c);
 		printf("fib(%d) = %d ", valor, c-1);
        printf("calls = %d\n", resultado); 	
 	}   
 
    return 0;
}
