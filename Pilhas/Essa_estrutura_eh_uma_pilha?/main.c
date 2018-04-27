#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct {
	int topo;
	int elementos[TAM];
} pilha;

void inicializa(pilha *p);
void push(pilha *p, int elem);
int top(pilha* p);
void pop(pilha* p);
int vazio(pilha *p);
int cheio(pilha *p);

int main() {
	pilha p;
	int n,i,X,Y,cont1=0,cont2=0;
	inicializa(&p);
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&X);
		if(X==1){
			scanf("%d",&Y);
			push(&p,Y);
			cont1++;
		}
		if(X==2){
			scanf("%d",&Y);
			if(top(&p)==Y){
				cont2++;
			}
			pop(&p);
		}
	}
	if(cont1==cont2){
		printf("S");
	}	else{
		printf("N");
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

int top(pilha* p) {
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
