#include<stdio.h>
#include<string.h>



void inverte_string(char *str){
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while(inicio < fim){
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

}


int main(){


    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    inverte_string(palavra);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}