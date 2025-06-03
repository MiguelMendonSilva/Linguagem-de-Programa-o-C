#include <stdio.h>
#include <string.h>

void linha(FILE *stream)
{

    int x1;
    int y1;
    int x2;
    int y2;

    printf("Digite a coordenada x inicial: ");
    scanf("%d", &x1);

    printf("Digite a coordenada y inicial: ");
    scanf("%d", &y1);

    printf("Digite a coordenada x final: ");
    scanf("%d", &x2);

    printf("Digite a corrdenada y final: ");
    scanf("%d", &y2);

    fprintf(stream, "<svg viewBox=\"0 0 100 100\" xmlns=\"http://www.w3.org/2000/svg\">"
                    "<line x1 =\"%d\" y1 =\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"red\" />"
                    "</svg>",
            x1, y1, x2, y2);
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
        printf("Erro ao abrir o arquivo!");
    }
    else
    {
        linha(arquivo);
        fclose(arquivo);
        printf("Arquivo %s criado com sucesso.", nomeArquivo);
    }

    return 0;
}
