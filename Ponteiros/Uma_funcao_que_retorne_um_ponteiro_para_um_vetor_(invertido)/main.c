#include <stdio.h>
#include <stdlib.h>


int *Swap(int *array,int size){
    int i,temp=size;
    int *swapped= (int *) malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        swapped[temp-1]=array[i];
        temp--;
    }
    return swapped;
}

int main()
{
    int size=0,i=0;
    scanf("%i",&size);
    int *array = (int *) malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        scanf("%i",&array[i]);
    }
    int *swapped=Swap(array,size);
    for(i=0;i<size;i++){
        printf("%i ",swapped[i]);
    }
    return 0;
}
