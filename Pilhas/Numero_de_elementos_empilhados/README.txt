Toda estrutura bem projetada possui funções que auxiliam o programador, dando a ele mais visibilidade ou mais funcionalidades. Dado o código da estrutura de pilha estática disponibilizada na disciplina (ou uma pilha estática implementada pelo próprio aluno), implemente a seguinte função:

int size(tipo_pilha *p);

Essa função recebe uma pilha como parâmetro e retorna um inteiro, que representa a quantidade de elementos empilhados na pilha até o momento. Perceba que se a pilha está vazia, a função retorna 0.

O programa receberá uma quantidade indefinida de linhas. Cada linha contem uma string e pode conter um inteiro. Existem 3 tipos de string que podem ser lidos no problema, "EMP", "DESEMP", "FIM".

Se a linha for dessa maneira: 
EMP 10 
o programa deverá empilhar o inteiro 10.

Caso a linha seja: 
DESEMP 
o programa deve desempilhar. Note que o elemento desempilhado nesse caso não tem utilidade.

Por fim, quando a linha de entrada for: 
FIM 
a leitura é encerrada.

Após a entrada "FIM", o programa deve escrever na tela o resultado da função "size", que representa a quantidade de elementos na pilha.

Exemplo:

Entrada: 
EMP 100 
EMP 10 
DESEMP 
EMP 24 
EMP 1 
DESEMP 
FIM

Saída: 
2

P.S.: essa pilha deve ser uma pilha de inteiros. A pilha disponibilizada empilha variáveis do tipo char. Deve-se, então, alterar a pilha para que aceite o tipo int. 
P.S.2: o tamanho máximo da pilha pode ser 50. 
P.S.3: nenhum caso de teste tentará desempilhar uma pilha que esteja vazia ou tentar empilhar em uma pilha cheia.

Dica: guarde as alterações feitas na sua pilha. As funções acrescentadas podem auxiliar a resolver problemas posteriores.
