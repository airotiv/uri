#include <stdio.h>

int main(int argc, char **argv)
{
	int j;
	char i;
	
	for (i = '1', j = 60; j > 0; i += 3, j -= 5) {
		printf("I=%c J=%d\n", i, j);
	}
	i = '?';
	
	printf("I=%c J=%d\n", i, j);
	
	return 0;
}



