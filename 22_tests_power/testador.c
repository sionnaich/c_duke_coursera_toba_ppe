#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned power(unsigned x, unsigned y);

int main()
{
	int x;
	int y;
	printf("digite x: ");
	scanf("%d", &x);
	printf("digite y: ");
	scanf("%d", &y);
	printf("\n");
	unsigned elevado = power(x, y);
	printf("Resultado es: %u\n", elevado);
	return EXIT_SUCCESS;
}