Faça uma função que receba uma string e um valor inteiro n:

char *multiplica_palavra(char *str, int n);

Essa função deverá retornar uma nova string, porém reescrita n vezes a partir da string passada por parâmetro. Exemplos:

Exemplo 1:

str = "abc"

novastr = multiplica_palavra(str, 2);

novastr = "abcabc"

Exemplo 2:

str = "runcodes"

novastr = multiplica_palavra(str, 1);

novastr = "runcodes"

Exemplo 3:

str = "claudio"

novastr = multiplica_palavra(str, 4);

novastr = "claudioclaudioclaudioclaudio"

O programa recebe um inteiro n e uma string str, e saída deverá printar a nova string representada pela saída da função. Para todos os casos de teste, n >= 1.

Exemplo de entrada: 
2 
abcd

Saída: 
abcdabcd

Obs.: a string de entrada do programa tem tamanho máximo 100 e não possui o caracter espaço, ou seja, pode ser lido por scanf normalmente. A string de saída da função deverá ser alocada dinamicamente. Não esqueça de considerar o '\0' ao final da string final.


