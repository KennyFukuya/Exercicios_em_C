#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multiplica_palavra(char *Array, int n){
  int i=0,cont=0,j=0;
  int size=strlen(Array);
  char *NewArray= (char *) malloc(sizeof(char)*(n*size)+1);
  while(cont<n){
    for(j=0;j<size;j++){
      NewArray[i]=Array[j];
      i++;
    }
    cont++;
  }
  NewArray[i+1]='\0';
  return NewArray;
}

int main(){
  char Array[100];
  int n;
  scanf("%i",&n);
  scanf("%s",Array);
  char *newArray=multiplica_palavra(Array,n);
  printf("%s",newArray);
  free(newArray);
}
