#include <stdio.h>
#include <string.h>


int main(){
    char palavra[30];

    printf("Digite uma palavra:\n");
    gets(palavra);
    fflush(stdin);

  
    int tamanhoDaPalavra = strlen(palavra);

    for(int i = tamanhoDaPalavra-1; i >= 0; i--){
        printf("%c", palavra[i]);
        
    }

    printf("\n");
    printf("A palavra nao eh um palindromo");
    
}

