#include<stdio.h>
#include<string.h>

int palindromo(char *str){
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while(inicio < fim){
        if(*inicio != *fim){
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}




int main(){

    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Palavra digitada: %s\n", palavra);

    if(palindromo(palavra)){
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    }else{
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }



    return 0;
}