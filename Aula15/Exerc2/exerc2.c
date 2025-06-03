#include <stdio.h>
#include <string.h>

int main()
{

    char nomeArquivo[100];
    int x, y, width, height;

    // Pedir as informações
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a coordenada x: ");
    scanf("%d", &x);

    printf("Digite a coordenada y: ");
    scanf("%d", &y);

    printf("Digite a largura: ");
    scanf("%d", &width);

    printf("Digite a altura: ");
    scanf("%d", &height);

    char arquivoSvg[100];
    strcpy(arquivoSvg, nomeArquivo);
    strcat(arquivoSvg, ".svg");

    FILE *arquivo = fopen(arquivoSvg, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        fprintf(arquivo, "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\"><rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" /> </svg>", x, y, width, height);
        fclose(arquivo);
    }

    return 0;
}
