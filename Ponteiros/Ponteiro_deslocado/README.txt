Faça um programa que receba um vetor de inteiros V de tamanho N. O programa deve receber também um inteiro D, sendo D < N. Implemente neste programa a seguinte função:

int *deslocamento(int *v, int d);

Onde 'v' é o vetor e 'd' é o valor inteiro da entrada D. A função deverá retornar um ponteiro que aponte para a posição v[d]. Ou seja, esse ponteiro deverá se deslocar 'd' posições a partir da posição inicial de v.

A primeira linha da entrada é o valor inteiro N, seguido de N inteiros que preenchem o vetor V. Por último, é lido o valor inteiro D. A saída consiste em imprimir os elementos do vetor a partir do ponteiro que foi deslocado no vetor V, numa única linha, separado pro espaço.

Exemplo 1:

Entrada: 
5 
3 4 1 5 8 
2

Saída: 
1 5 8

P.S.: A função "deslocamento" não poderá alocar o vetor. O único malloc deve ser feito no início do programa. 
P.S.2: Olhar o caso de teste 1 para melhor entendimento.
