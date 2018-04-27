#include <stdio.h>
#include <stdlib.h>


int main(){
  int size,cont=0;
  scanf("%i",&size);
  int *Array = (int *) malloc (size * sizeof(int));
  for(int i=0;i<size;i++){
    scanf("%i",&Array[i]);
  }
  int i=0;
  while(Array[i]!=99 && Array[i]!=0){
    if(Array[i]<size){
      cont++;
      i=i+Array[i];
    }
    if(Array[i]==0){
      printf("%i",cont);
      //break;
    }
    if(Array[i]==99){
      printf("%i",cont);
    }
  }
}
