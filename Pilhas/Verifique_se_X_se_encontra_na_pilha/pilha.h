#define TAM 100

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
