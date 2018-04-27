#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct {
	int topo;
	char elementos[TAM];
} pilha;

void inicializa(pilha *p);
void push(pilha *p, int elem);
char top(pilha *p);
void pop(pilha *p);
int vazio(pilha *p);
int cheio(pilha *p);

int main() {
  char c[49];
  pilha p;
  int i=0,aux=0;
  inicializa(&p);
  scanf("%s",c);
  for(i=0;c[i]!='\0';i++){
    if(c[i]=='(' || c[i]=='['){
      push(&p,c[i]);
    }
    if(c[i]==')'){
      if(top(&p)=='('){
				pop(&p);
      }else{
        printf("DESBALANCEADO");
			//	printf("]");
        aux=1;
				break;
			}
    }
    if(c[i]==']'){
      if(top(&p)=='['){
				pop(&p);
      }else{
        printf("DESBALANCEADO");
		//		printf("]");
        aux=1;
				break;
			}
  }
}
	if(aux==0){
		printf("BALANCEAMENTO OK");
	}
	return 0;
}



void inicializa(pilha *p) {
	p->topo = -1;
}

void push(pilha *p, int elem) {
	if(cheio(p)!=1){
		p->topo++;
		p->elementos[p->topo] = elem;
	}else{
		printf("ERRO: Pilha esta cheia!");
	}
}

char top(pilha* p) {
	return p->elementos[p->topo];
}

void pop(pilha* p) {
	if(vazio(p)!=1){
		p->topo--;
	}else{
		printf("ERRO: Pilha esta vazia! %i",p->topo	);
	}
}

int vazio(pilha *p) {
	if(p->topo==-1){
		return 1;
	}else{
		return 0;
	}
}

int cheio(pilha *p) {
	if(p->topo>=TAM-1){
		return 1;
	}else{
		return 0;
	}
}
