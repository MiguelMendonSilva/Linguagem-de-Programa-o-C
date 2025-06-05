#include<stdio.h>
#include<string.h>

int main() {

    FILE *arquivo = fopen("remedios.txt", "r");
    char linha[50];
    char ultimaLinha[50];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    while (fgets(linha, 50, arquivo) != NULL) {
        strcpy(ultimaLinha, linha);
    }

    fclose(arquivo);

    printf("Última: %s\n", ultimaLinha);

    return 0;
}
