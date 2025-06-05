#include <stdio.h>
#include <string.h>

int main(void) {
    char titulo[50];
    char nomeArquivo[60];
    int personagens;
    char nome[50];

    printf("Digite o título do livro: ");
    fgets(titulo, 50, stdin); 

    strcpy(nomeArquivo, titulo);
    strcat(nomeArquivo, ".txt");

    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
    } else {
        int personagens;
        printf("Digite a quantidade de personagens: ");
        scanf("%d", &personagens);
        getchar();

        for (int i = 0; i  < personagens; i++) {
            printf("Digite o nome do personagem : ");
            fgets(nome, 50, stdin);
            fprintf(arquivo, "%s", nome);
            
        }

        fclose(arquivo);
        printf("Arquivo '%s' criado com sucesso!\n", nomeArquivo);
    }

    return 0;
}
