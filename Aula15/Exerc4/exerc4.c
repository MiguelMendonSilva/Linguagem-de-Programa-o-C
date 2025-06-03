#include <stdio.h>
#include <string.h>

void circulo(FILE *stream)
{
    int cx;
    int cy;
    int r;

    printf("Digite a posicao x do circulo: ");
    scanf("%d", &cx);

    printf("Digite a posicao y do circulo: ");
    scanf("%d", &cy);

    printf("Digite o raio do circulo: ");
    scanf("%d", &r);

    fprintf(stream, "<svg viewBox=\"0 0 100 100\" xmlns=\"http://www.w3.org/2000/svg\">"
                    "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" /></svg>",
            cx, cy, r);
}

int main()
{

    char nomeArquivo[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    strcat(nomeArquivo, ".svg");

    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        circulo(arquivo);
        fclose(arquivo);
        printf("Arquivo %s criado com sucesso.\n", nomeArquivo);
    }

    return 0;
}