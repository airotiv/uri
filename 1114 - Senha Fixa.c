#include <stdio.h>

int main()
{
	int senha, aux = 1;;
	
	while (aux) {
		scanf("%d", &senha);
		switch (senha) {
			case 2002 :
				printf("Acesso Permitido\n");
				aux = 0;
			break;
			
			default: 
				printf("Senha Invalida\n");
		}
	}
	
	return 0;
}

