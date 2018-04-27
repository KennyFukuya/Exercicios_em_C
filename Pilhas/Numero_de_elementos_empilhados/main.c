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
int size(pilha *p);

int main() {
  char c[10];
	int a;
	pilha p;
	inicializa(&p);
	do{
		scanf("%s",c);
		if(c[0]=='E'){
			scanf("%i",&a);
			push(&p,a);
		}else{
			if(c[0]=='D'){
				pop(&p);
			}else{
				printf("%i",size(&p));
				break;
			}
		}
	}while(c[0]!='F');
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

int size(pilha *p){
	if(vazio(p)){
		return 0;
	}else{
		return p->topo+1;

	}
}
