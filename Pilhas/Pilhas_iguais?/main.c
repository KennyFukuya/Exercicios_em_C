#include <stdio.h>

#define MAX 50

typedef struct {
	int topo;
	int entradas[MAX];
} tipo_pilha;

void inicializa_pilha(tipo_pilha*);
void push(int, tipo_pilha*);
void pop(int*, tipo_pilha*);
int pilha_cheia(tipo_pilha*);
int pilha_vazia(tipo_pilha*);
int equals(tipo_pilha*, tipo_pilha*);

int main() {
	tipo_pilha p1, p2;
	int i;

	inicializa_pilha(&p1);
	inicializa_pilha(&p2);

	scanf("%d", &i);
	while (i != -1) {
		push(i, &p1);
		scanf("%d", &i);
	}

	scanf("%d", &i);
	while (i != -1) {
		push(i, &p2);
		scanf("%d", &i);
	}

	printf("%d\n", equals(&p1, &p2));

	return 0;
}

void inicializa_pilha(tipo_pilha* p) {
	p->topo = -1;
}

void push(int x, tipo_pilha* p) {
	if (!pilha_cheia(p)) {
		p->topo++;
		p->entradas[p->topo] = x;
	}
}

void pop(int* x, tipo_pilha* p) {
	if (!pilha_vazia(p)) {
		*x = p->entradas[p->topo];
		p->topo--;
	}
}

int pilha_cheia(tipo_pilha* p) {
	return p->topo == MAX-1;
}

int pilha_vazia (tipo_pilha* p) {
	return p->topo == -1;
}

int equals(tipo_pilha* p1, tipo_pilha* p2) {
	int i=0,cont=0;
	if(p1->topo==p2->topo){
		for(i=0;i<p1->topo+1;i++){
			if(p1->entradas[i]==p2->entradas[i]){
				cont++;
			}
		}
	}
	if(cont==p1->topo+1){
		return 1;
	}else{
		return 0;
	}
}
