#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main() {
	int x, y;

	scanf("%d %d", &x, &y);

	troca(&x, &y);

	printf("%d %d\n", x, y);

	return 0;
}

void troca(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
