Faça uma função que calcule a soma dos valores da diagonal principal de uma matriz quadrada de ordem n. A diagonal principal de uma matriz são os valores m[i][i], onde 0 <= i < n.

OPCAO 1 de código: int diagonal_principal(int **mat, int n);

OPCAO 2 de código: uma estrutura opcional e aceitável é a de vetor de ponteiros, vista e discutida em sala de aula. 
Assim 
int *v_ponteiros [n]; // N ponteiros .... para as N linhas de N valores onde cada vetor vai apontar para uma linha de n INTEIROS. ... Para diagonal, basta calcular o deslocamento necessário que tem os dados da diagonal.

O programa receberá um inteiro n, que representa a ordem da matriz. Em seguida, o programa receberá n linhas de n inteiros representando a matriz. A saída deverá ser um inteiro representando a soma dos elementos na diagonal principal.

Para a matriz abaixo:

10 20 30 
40 50 60 
70 80 90

soma da diagonal principal = 10 + 50 + 90 = 150.

A entrada do programa seria: 
3 
10 20 30 
40 50 60 
70 80 90

Saída do programa neste exemplo: 
150

Dica: verifique os casos de testes disponíveis para melhor entendimento.
