#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%i",&m);
    scanf("%i",&n);
    int **Matriz=(int **) malloc(m*sizeof(int *));
    for(i=0;i<m;i++){
        Matriz[i]=(int*) malloc(n*sizeof(int));
        for(j=0;j<n;j++){
            scanf("%i",&Matriz[i][j]);
        }
    }
    int temp=Matriz[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(Matriz[i][j]>temp){
                temp=Matriz[i][j];
            }
        }
    }
    printf("%i",temp);
    return 0;
}
