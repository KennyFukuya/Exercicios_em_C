#include <stdio.h>
#include <stdlib.h>


int BlankSpaces(char **Array, int size){
    int i,j,cont = 0;

    for(i = 0; i < size; i++){
        for(j = 0; Array[i][j] != '\0'; j++){
            if(Array[i][j] == ' '){
            //    printf("%c ",Array[i][j-1]);
              //  printf("%c ",Array[i][j+1]);
                cont++;
            }
        }
    }
    return cont;
}



int main(){
    int size, i=0;

    scanf("%i\n", &size);

    char **Array = (char **) malloc(size * sizeof(*Array));
    for(i=0;i<size;i++){
      Array[i] = (char *) malloc(100 * sizeof(char));
    }
    //getchar();
    for(i=0;i<size;i++){
        scanf("%[^\n]s",Array[i]);
        getchar();
        //fgets(Array[i], 100, stdin);
	//printf("%d %s\n",i, Array[i]);
    }

    printf("%i\n", BlankSpaces(Array, size));

    return 0;
}
