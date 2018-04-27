Para esse problema, você pode usar o código disponibilizado aqui ou aplicar em sua própria pilha. O arquivo "questao3.c" consiste na pilha disponibilizada pelo professor e a função main já cuida de toda entrada e saída solicitada pelo problema, ou seja, não demanda nenhuma alteração. Você só deverá implementar a função equals():

int equals(tipopilha *p1, tipopilha *p2);

A função compara duas pilhas, retornando o inteiro 1 caso sejam iguais, e 0 caso não sejam. Para que a condição de igualdade seja satisfeita, ambas as pilhas devem ter o mesmo número de elementos empilhados e os elementos devem ser os mesmos dada a ordem que foram empilhados. Ou seja, o 1º elemento empilhado em p1 deve ser igual ao 1º elemento empilhado em p2, o 2º elemento empilhado em p1 deve ser igual ao 2º elemento empilhado em p2 e assim por diante. Note que duas pilhas vazias são consideradas iguais.

O programa consiste em uma entrada com um número indeterminado de linhas, cada uma com apenas um inteiro. Ao iniciar a leitura, todo inteiro diferente de -1 deve ser inserido na pilha 1. Ao ler o inteiro -1, ele é desconsiderado, e a partir dai, todo inteiro diferente de -1 será inserido na pilha 2. Ao ler -1 novamente, a entrada é encerrada. Por exemplo:

Entrada: 
10 
20 
30 
-1 
40 
50 
60 
-1

Pilha 1 = 10, 20, 30 
Pilha 2 = 40, 50, 60

A saída consiste em um inteiro, sendo ele a saída da função. Ou seja, se as duas pilhas forem iguais, o programa escreve na tela 1, caso contrário, 0.

Exemplo 1:

Entrada: 
1 
2 
3 
-1 
4 
5 
6 
-1

Saída: 
0

Exemplo 2:

Entrada: 
3 
4 
5 
6 
-1 
3 
4 
5 
6 
-1

Saída: 
1

P.S.: lembrando, toda entrada e saída já está sendo tratado no main, só é necessário implementar a função equals().
