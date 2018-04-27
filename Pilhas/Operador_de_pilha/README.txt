Para esse problema, você deverá implementar mais uma função de pilha, a função top(), que retorna o elemento que está no topo da pilha:

void top(int *elem, tipo_pilha *p); // a assinatura pode variar de acordo com a preferência do aluno.

onde p é o ponteiro pra pilha e elem será o elemento resgatado. Note que essa função é semelhante a função pop(), a diferença é que top() NÃO remove o elemento do topo, só o acessa.

Com essa função devidamente implementada, juntamente com as funções básicas, sua tarefa agora é fácil, fazer um programa que opera uma pilha. O programa tem como entrada um número indeterminado de linhas. Cada linha contém um inteiro OP e pode conter um inteiro X. OP pode ser 1, 2, 3, 4 ou 5.

Se OP = 1 (empilhar), a linha receberá dois inteiros, OP e X:

1 10

Empilha-se 10 na pilha.

Se OP = 2 (desempilhar), a linha consiste de apenas um inteiro:

2

A pilha é desempilhada (o valor desempilhado é ignorado).

Se OP = 3 (topo), a linha consiste de apenas um inteiro:

3

O programa deve escrever na tela o valor do inteiro que está no topo da pilha, seguido de um caracter de pular linha ('\n').

Se OP = 4 (limpar), a linha consiste de apenas um inteiro:

4

A pilha deve ser totalmente esvaziada, ou seja, voltar a ter nenhum elemento empilhado.

Se OP = 5 (fim), a linha consiste de apenas um inteiro:

5

O programa é encerrado.

É importante destacar que, neste problema, é possível que exista uma operação de verificar o topo (TOPO) ou desempilhar (DESEMP) uma pilha vazia. Caso uma dessas operações seja feita numa pilha vazia, o programa deverá escrever na tela "pilha vazia" (sem as aspas).

P.S.: tamanho máximo da pilha pode ser 50. Com esse tamanho, nenhum caso de teste tentará empilhar numa pilha cheia. 
P.S.2: a assinatura da função top() pode variar dependendo da implementação de pilha que você está usando.
