#include <stdio.h>
#include <stdlib.h>

int main(){
	int X,Y;
  	scanf("%i",&X);
	scanf("%i",&Y);
	int M[X][Y];
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			scanf("%i",&M[i][j]);
		}
	}
	int A;
	scanf("%i",&A);
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			M[i][j]=M[i][j]*A;
			printf("%i ",M[i][j]);
		}
	printf("\n");
	}
  return 0;
}
