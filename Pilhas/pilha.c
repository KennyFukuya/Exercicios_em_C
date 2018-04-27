#include "pilha.h"
#include <stdio.h>


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
