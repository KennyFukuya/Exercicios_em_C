#include <stdio.h>
#include "pilha.h"

int main() {
	int c[TAM-1];
	int i=0,x,cont=0;
	pilha p;
	inicializa(&p);

	for(i=0;i<TAM-1;i++){
		scanf("%i",&c[i]);
    if(c[i]==-1){
      break;
    }else{
    push(&p,c[i]);
//    printf("%i ",c[i]);
  }
}

  scanf("%i",&x);
  //printf("x %i ",x);
  for(i=0;vazio(&p)!=1;i++){
    if(top(&p)==x){
      cont++;
      pop(&p);
    }else{
      pop(&p);
    }
  }
//  printf("%i ",cont);
  if(cont!=0){
    printf("SIM");
  }else{
    printf("NAO");
  }

	return 0;
}
