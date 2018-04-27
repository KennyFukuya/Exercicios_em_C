#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct {
	int topo;
	char elementos[TAM];
} pilha;

void inicializa(pilha *p);
void push(pilha *p, int elem);
char top(pilha* p);
void pop(pilha* p);
int vazio(pilha *p);
int cheio(pilha *p);

int main() {
	char c[49];
	int cont1=0,cont2=0,i=0,j=0;
	pilha p;
	inicializa(&p);
	scanf("%s",c);

	for(i=0;c[i]!='c';i++){
		push(&p,c[i]);
		cont1++;
	}

  for(j=i+1;j<=(strlen(c)-1);j++){
		if(top(&p)==c[j]){
			pop(&p);
      cont2++;
		}else{
      cont2--;
		}
	}

	if(cont1==cont2){
		printf("ACEITO");
//		printf("cont1:%i cont2:%i",cont1,cont2);
	}

	else{
		printf("NAO ACEITO");
	//	printf("cont1:%i cont2:%i",cont1,cont2);
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
