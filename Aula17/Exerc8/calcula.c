#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
    char *query = getenv("QUERY_STRING");
    char *posicao = strchr(query, '=');
     printf("Content-type: text/html\n\n");

    char *valor_str = posicao + 1;
    int ano = atoi(valor_str);
    int atual = 2025;
    int idade = atual - ano;

    printf("Ano digitado:  %d.\n", ano);
    printf("Se passaram %d anos .\n", idade);

    return 0;
}