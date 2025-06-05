#include<stdio.h>

struct filme {
    char titulo[50];
    char genero[20];
    int ano;
    char duracao[20];
};

int main(){

    struct filme filme1;

    printf("Digite o titulo do filme: ");
    fgets(filme1.titulo, 50, stdin);

    printf("Digite o genero do filme: ");
    fgets(filme1.genero, 20, stdin);
    //scanf(" %s", filme1.genero);

    printf("Digite a duracao do filme: ");
    fgets(filme1.duracao, 20, stdin);

    printf("Digite o ano do filme: ");
    scanf(" %d", &filme1.ano);

    FILE *arquivo = fopen("filme.txt", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else{
        fwrite(&filme1, sizeof(struct filme), 1, arquivo);
        fclose(arquivo);
    }


    return 0;
}