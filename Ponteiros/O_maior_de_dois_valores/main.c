#include <stdio.h>
#include <stdlib.h>

int f_maior( int a, int b){
  if(a<b){
  return b;
  }
  else{
  return a;
  }
}



int main(){
  int a,b;
  scanf("%i",&a);
  scanf("%i",&b);
  printf("%i",f_maior(a,b));
  return 0;
}
