#include <stdio.h>
#include <stdlib.h>

int *deslocamento(int *v, int d){
    return &v[d];
    }

int main()
{
    int N,i,D;
    scanf("%i",&N);
    int *V = (int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%i",&V[i]);
    }
    scanf("%i",&D);
    if(N>D){
        for(i=D;i<N;i++){
            printf("%i ",*deslocamento(V,D));
            D++;
        }
    }
    free(V);
    return 0;
}
