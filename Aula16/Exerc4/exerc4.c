#include<stdio.h>
#include<string.h>

int main(){

    char data[11];
    char hora[10];


    FILE * arquivo = NULL;
    arquivo = fopen("remedios.txt", "a");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
    } else{
        printf("Digite uma data no formato dd/mm/aaaa: ");
        scanf("%s", data);

        printf("Digite uma hora no formato hh:mm: ");
        scanf("%s", hora);

        fprintf(arquivo, "%s %s", data, hora);

    }

fclose(arquivo);
    
}