#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include <string.h>

int f_posicao(char *str , char *substr){
    int i=0,j=0;
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(substr);j++){
            if(str[i+j]!=substr[j]){
                break;
            }
            if(j==strlen(substr)-1){
                return i+1;
            }
        }
    }
    return -1;
}
int main()
{
    char str[MAX],substr[MAX];
    scanf("%s",str);
    scanf("%s",substr);
    if(f_posicao(str,substr)!=-1){
        printf("%i",f_posicao(str,substr));
    }
    return 0;
}











/*
for(i=0;i<strlen(str);i++){
    for(j=0;j<strlen(substr);j++){
        if(str[i+j]!=substr[j]){
            break;
        }
        if(j==strlen(substr)){
            return i;
        }
    }
}
*/
