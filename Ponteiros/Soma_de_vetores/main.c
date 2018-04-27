#include <stdio.h>
#include <stdlib.h>

int soma_vetores(int *v1,int *v2,int i){
    v1[i]=v1[i]+v2[i];
    return v1[i];
}


int main()
{
    int n;
    scanf("%i",&n);
    int v1[n],v2[n];
    for(int i=0;i<n;i++){
        scanf("%i",&v1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%i",&v2[i]);
    }
    for(int i=0;i<n;i++){
        printf("%i ",soma_vetores(v1,v2,i));
    }
    return 0;
}
