#include <stdio.h>
#include <stdlib.h>

char *CompareString(char *string1, char *string2){
    int size1=0,size2=0,i;
    for(i=0;string1[i]!='\0';i++){
        size1++;
    }
    for(i=0;string2[i]!='\0';i++){
        size2++;
    }
    if(size1>size2){
        return string1;
    }
    else
        return string2;
}


int main()
{
    char string1[100],string2[100];
    fgets(string1,100,stdin);
    fflush(stdin);
    fgets(string2,100,stdin);
    fflush(stdin);
    printf("%s",CompareString(string1,string2));
    return 0;
}
