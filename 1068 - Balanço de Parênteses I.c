#include <stdio.h>
#include <stdlib.h>
#define MAX 1010

typedef struct _n {
	char elemento;
	struct _n* proximo;	
} No;

typedef struct _p {
	int tamanho;
	No* topo; //Aponta para o topo da pilha
} Pilha;

/*INICIALIZA A PILHA*/
void inicializar (Pilha* p) {	
	p->tamanho = 0;
	p->topo = NULL;
}

/*RETORNA 1 QUANDO A PILHA ESTÁ VAZIA, 0 CASO CONTRÁRIO*/
int empty (Pilha p) {
	if (p.tamanho == 0)
		return 1;
	return 0;
}

/*RETORNA 1 QUANDO A PILHA ESTÁ CHEIA*/
int full (Pilha p) {
	if (p.tamanho == MAX)
		return 1;
	return 0;
}

/*INSERE UM NOVO ELEMENTO NO TOPO DA PILHA*/
/*RETORNA 1 QUANDO A OPERAÇÃO FOR BEM SUCEDIDA, 0 CASO A PILHA ESTIVER CHEIA E -1 SE HOUVER PROBLEMA NA ALOCAÇÃO*/
int push (Pilha* p, char elemento) {
	if (full(*p))
		return 0;
	No* novo = (No*)malloc(sizeof(No));
	if (novo) {
		novo->elemento = elemento;
		novo->proximo = p->topo; //Novo começa a apontar para o topo
		p->topo = novo;
		p->tamanho++;
		return 1;
	}
	return -1;
}

/*RETIRA ELEMENTO DA POSIÇÃO INDICADA PELO TOPO*/
/*RETORNA 1 QUANDO A OPERAÇÃO FOR BEM SUCEDIDA, 0 CASO A PILHA ESTEJA VAZIA*/
int pop (Pilha* p) {
	if (empty(*p))
		return 0;	
	No* aux = p->topo;
	p->topo = aux->proximo;
	free(aux);
	p->tamanho--;
	return 1;
}

void destruir (Pilha *p) {
	No* aux = p->topo;
	while (aux) {
		No* aux2 = aux->proximo;
		free(aux);
		aux = aux2;
	}
}

int main()
{
	char expressao[MAX];
	int i, aux;
	Pilha stack;
	
	while (scanf("%s", expressao)!=EOF) {
		inicializar(&stack);
		
		aux = 1;				
		for (i = 0; expressao[i] != '\0'; i++) {
			if (expressao[i] == ')') {
				if (stack.tamanho) //Se já houver algo na pilha
					pop(&stack);
				else {
					aux = 0;
					break;
				}
			}
			else {
				if (expressao[i] == '(') {
					if(full(stack) == 0)
						push(&stack, '(');
					else { 					
						aux = 0;
						break;					
					}
				}
			}
		}
		if(aux && empty(stack)) //Se pilha estiver vazia, é porque os parenteses correspondentes foram encontrados
			printf("correct\n");
		else
			printf("incorrect\n");
		
	}
	
	return 0;
}
