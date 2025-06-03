#include <stdio.h>

int abertura(FILE *arquivo)
{
    int retorno = fprintf(arquivo, "<svg version=\"1.1\" ");

    if (retorno < 0)
    {
        return 0;
    }

    retorno = fprintf(arquivo, "width=\"300\" height=\"200\" ");

    if (retorno < 0)
    {
        return 0;
    }

    retorno = fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">");

    if (retorno < 0)
    {
        return 0;
    }

    return 1;
}

int fechamento(FILE *arquivo)
{
    int retorno = fprintf(arquivo, "</svg>");

    if (retorno < 0)
    {
        return 0;
    }

    return 1;
}

void retangulo(FILE *stream)
{
    int x;
    int y;
    int width;
    int height;

    printf("Digite a posição x: ");
    scanf("%d", &x);
    printf("Digite a posição y: ");
    scanf("%d", &y);
    printf("Digite a largura: ");
    scanf("%d", &width);
    printf("Digite a altura: ");
    scanf("%d", &height);

    fprintf(stream, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", x, y, width, height);
}

int main()
{

    FILE *arquivo;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }
    else
    {
        int resultado = abertura(arquivo);

        if (resultado)
        {
            retangulo(arquivo);

            if (resultado)
            {
                resultado = fechamento(arquivo);
            }
        }
        else
        {
            printf("Erro ao escrever no arquivo.\n");
        }
    }

    fclose(arquivo);

    return 0;
}