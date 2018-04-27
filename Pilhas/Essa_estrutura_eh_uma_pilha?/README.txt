Uma pilha é uma estrutura do tipo LIFO (Last In - First Out), ou seja, o último que entra é o primeiro que sai. O problema proposto neste exercício é analisar o comportamento de uma estrutura e ver se ela pode ou não ser uma pilha.

Inicialmente, será lido um inteiro N. Segue-se N linhas com dois inteiros, X e Y, em cada linha. X representa a operação que a estrutura está realizando e Y o elemento no qual a estrutura opera. Caso X seja igual a 1, a estrutura estará inserindo o elemento Y, já caso X seja 2, a estrutura estará removendo um elemento, e Y representa o elemento que foi removido. O que se quer saber é se essa estrutura se comporta como pilha ou não. A saída, então, é um caractere. "N" para caso a estrutura não se comporte como pilha, e "S" caso possa ser uma pilha (sem as aspas).

Exemplo 1:

Entrada: 
6 
1 1 
1 2 
1 3 
2 3 
2 2 
2 1

Saída: 
S

Exemplo 2:

Entrada: 
6 
1 1 
1 2 
1 3 
2 1 
2 2 
2 3

Saída: 
N

Exemplo 3:

Entrada: 
6 
1 10 
1 20 
2 20 
1 30 
2 30 
2 10

Saída: 
S

Esse exercício é uma simplificação do exercício de número 1340 do URI. Link: 
https://www.urionlinejudge.com.br/judge/pt/problems/view/1340

P.S.: todo elemento inserido na estrutura é removido em algum momento, ou seja, ao fim do programa a estrutura não possui nenhum elemento. Isso foi feito para que não haja dúvidas se a estrutura é ou não uma pilha. 
P.S.2: nenhum caso de teste realiza alguma operação inconsistente, como tentar desempilhar uma pilha vazia.
