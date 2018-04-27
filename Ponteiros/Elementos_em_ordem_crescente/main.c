#include <stdio.h>

int main() {
	int a, b;
	int *p1;
	int *p2;

	scanf("%d %d", &a, &b);

	/* Operações */
  if(a>=b){
    p1=&b;
    p2=&a;
  }
  else{
    p1=&a;
    p2=&b;
  }


	/* --------- */

	printf("%d %d\n", *p1, *p2);

	return 0;
}
