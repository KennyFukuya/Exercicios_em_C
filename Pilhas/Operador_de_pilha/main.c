#include <stdio.h>

#define TAM 10

typedef struct pilha {
	int topo;
	int elementos[TAM];
} pilha;

void inicializa(pilha*);
void push(pilha*, int elem);
void pop(pilha*, int*);
int vazia(pilha*);
int cheia(pilha*);
int top(pilha* p);
/* Só o main pode ser alterado neste exercício */

int main() {
	pilha p;
	int op, x;

	inicializa(&p);

	scanf("%d", &op);
	while (op != 5) {
		if (op == 1) {
			scanf("%d", &x);
			if(!cheia(&p)){
				push(&p, x);
			}else{
				printf("pilha cheia\n");
			}
		}

		if (op == 2) {
			if(!vazia(&p)){
				pop(&p, &x);
			}else{
				printf("pilha vazia\n");
			}
		}

		if(op == 3){
			if(top(&p)!=-1){
				printf("%d\n",top(&p));
			}else{
				printf("pilha vazia\n");
			}
		}

		if(op == 4){
			p.topo=-1;
		}


		scanf("%d", &op);
	}

	return 0;
}

void inicializa(pilha *p) {
	p->topo = -1;
}

void push(pilha *p, int elem) {
	p->topo++;
	p->elementos[p->topo] = elem;
}

void pop(pilha* p, int *x) {
	*x = p->elementos[p->topo];
	p->topo--;
}

int vazia(pilha *p) {
	return p->topo == -1;
}

int cheia(pilha *p) {
	return p->topo == TAM - 1;
}

int top(pilha* p) {
	return p->elementos[p->topo];
}
