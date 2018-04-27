Para esse exercício, use o arquivo disponível aqui. O arquivo questao2.c oferece uma implementação de pilha um pouco diferente. A grande diferença entre a pilha oferecida na disciplina e a proposta neste exercício é que as funções push e pop não fazem verificação nenhuma, como analisar se a pilha se encontra vazia ou cheia, por exemplo. Essa implementação deixa claro esse comportamento, e o usuário da pilha deve fazer essas verificações no seu programa para mantê-lo consistente. Um mau uso dessa pilha pode levar a comportamentos indesejados.

O programa já está implementado, porém foi mal planejado, e pode colocar a pilha em uma situação de inconsistência (por exemplo, topo == -2, valor no qual o topo nunca deveria chegar).

As linhas de entrada contém um inteiro op, que representa a operação a ser realizada. Se op = 1, a linha terá mais um inteiro x, que será inserido na pilha (caso tente empilhar uma pilha cheia, o programa deve printar "pilha cheia", o que não está sendo feito). Se op = 2, a pilha é desempilhada e o valor desempilhado é printado na tela (caso tente desempilhar uma pilha vazia, o programa deve printar "pilha vazia", o que não está sendo feito). Se op = 5, o programa é encerrado.

Sua tarefa é alterar o main para que seu programa use a pilha de maneira consistente, fazendo as verificações necessárias e adicionando os "printf's" que faltam. Apenas o main pode ser alterado, nenhuma alteração poderá ser feita nas funções de pilha ou na estrutura. O tamanho máximo da pilha também não pode ser alterado.

Exemplo:

Entrada: 
1 10 
1 20 
2 
2 
2 
1 40 
2 
5

Saída: 
20 
10 
pilha vazia 
40

Dica: caso esteja em dúvida sobre situações de inconsistência, teste o programa oferecido antes de alterá-lo.
