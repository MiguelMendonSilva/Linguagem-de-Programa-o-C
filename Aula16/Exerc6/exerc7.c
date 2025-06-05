#include<stdio.h>


struct filme {
    char titulo[50];
    char genero[20];
    int ano;
    char duracao[20];
};

int main() {
    struct filme filme1;

    FILE *arquivo = fopen("filme.txt", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fread(&filme1, sizeof(struct filme), 1, arquivo);
    fclose(arquivo);

    printf("Título: %s", filme1.titulo); 
    printf("Gênero: %s", filme1.genero);
    printf("Duração: %s", filme1.duracao);
    printf("Ano: %d\n", filme1.ano);

    return 0;
}

