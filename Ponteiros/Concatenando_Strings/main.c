/*
Fa�a um programa que receba duas strings e retorne a concatena��o de ambas.

Para isso, fa�a uma fun��o que receba dois ponteiros de char e retorne um ponteiro de char.

char *concatenar(char *str1, char *str2);

O programa tem como entrada duas linhas, cada uma composta por uma palavra. A sa�da consiste na concatena��o de ambas.

P.S.: N�o � permitido o uso da biblioteca string.h. P.S.2: As strings de entrada t�m tamanho m�ximo 20.

*/

#include <stdio.h>
#include <stdlib.h>

char *concatenar(char *str1, char *str2){
    int i,j;
    for(i=0;str1[i]!='\0';i++){
    }
    for(j=0;str2[j]!='\0';j++){
    str1[i]=str2[j];
    i++;
    }
    str1[i]='\0';
    return str1;
}

int main()
{
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    concatenar(str1,str2);
    printf("%s",str1);
    return 0;
}
