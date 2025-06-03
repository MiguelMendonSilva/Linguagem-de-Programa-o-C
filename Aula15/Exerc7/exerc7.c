#include <stdio.h>
#include <string.h>

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

    fprintf(stream,
            "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" />",
            cx, cy, r);
}

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

    fprintf(stream, "<line x1 =\"%d\" y1 =\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"red\" />",
            x1, y1, x2, y2);
}

void texto(FILE *stream)
{
    int x, y;   // Small
    int x1, y1; // Heavy
    int x2, y2; // Small
    int x3, y3; // Rrrrr
    char frase[50];
    char frase1[50];
    char frase2[50];
    char frase3[50];

    printf("Digite a coordenada x da primeira frase com a classe Small: \n");
    scanf("%d", &x);
    printf("Digite a coordenada y  da primeira frase com a classe Small: \n");
    scanf("%d", &y);
    printf("Digite a frase do texto: \n");
    scanf("%s", frase);

    printf("Digite a coordenada x da segunda frase com a classe Heavy: \n");
    scanf("%d", &x1);
    printf("Digite a coordenada y  da segunda frase com a classe Heavy: \n");
    scanf("%d", &y1);
    printf("Digite a frase do texto: \n");
    scanf("%s", frase1);

    printf("Digite a coordenada x da terceira frase com a classe Small: \n");
    scanf("%d", &x2);
    printf("Digite a coordenada y da terceira frase com a classe Small: \n");
    scanf("%d", &y2);
    printf("Digite a frase do texto: \n");
    scanf("%s", frase2);

    printf("Digite a coordenada x da quarta frase com a classe Rrrrr: \n");
    scanf("%d", &x3);
    printf("Digite a coordenada y da quarta frase com a classe Rrrrr: \n");
    scanf("%d", &y3);
    printf("Digite a frase do texto: \n");
    scanf("%s", frase3);

    fprintf(stream,
            "<style> .small {font: italic 13px sans-serif;}"
            ".heavy{ font: bold 30px sans - serif; }"
            ".Rrrrr{font: italic 40px serif; fill: red;} </style >"
            "<text x = \"%d\" y = \"%d\" class = \"small\"> %s </text>"
            "<text x = \"%d\" y = \"%d\" class = \"heavy\"> %s </text>"
            "<text x = \"%d\" y = \"%d\" class = \"small\"> %s </text>"
            "<text x = \"%d\" y = \"%d\" class = \"Rrrrr\"> %s </text>",
            x, y, frase, x1, y1, frase1, x2, y2, frase2, x3, y3, frase3);
}

int main()
{
    char nomeArquivo[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    strcat(nomeArquivo, ".svg");

    FILE *arquivo = fopen(nomeArquivo, "w");
    abertura(arquivo);

    while (1)
    {
        char opcao;
        printf("Escolha uma opção: \n");
        printf("1- Retangulo\n");
        printf("2- circulo\n");
        printf("3- linha\n");
        printf("4- texto\n");

        scanf(" %c", &opcao);

        if (opcao == 'F' || opcao == 'f')
        {
            break;
        }

        switch (opcao)
        {
        case '1':
            retangulo(arquivo);
            break;
        case '2':
            circulo(arquivo);
            break;
        case '3':
            linha(arquivo);
            break;
        case '4':
            texto(arquivo);
            break;
        default:
            printf("Opção invalida\n");
            break;
        }
    }

    fechamento(arquivo);

    return 0;
}