#include <stdio.h>
#include <stdlib.h>

int diagonal_principal(int **mat, int n){
  int soma=0;
  for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if(i==j){
        soma=soma+mat[i][j];
      }
    }
  }
  return soma;
}

int main(){
  int n;
  scanf("%i",&n);
  int **mat= (int **) malloc(n*sizeof(int *));
  for(int i=0;i<n;i++){
    mat[i]=(int*) malloc(n*sizeof(int));
    for(int j=0;j<n;j++){
      scanf("%i",&mat[i][j]);
    }
  }
  int soma=diagonal_principal(mat,n);
  printf("%i",soma);
  for (int i=0; i<n; i++){
   free (mat[i]);
  }
  free (mat);
}
