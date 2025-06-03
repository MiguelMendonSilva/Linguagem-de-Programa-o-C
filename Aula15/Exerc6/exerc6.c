#include <stdio.h>
#include <string.h>

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

    fprintf(stream, "<svg viewBox =\"0 0 240 80\" xmlns=\"http://www.w3.org/2000/svg\">"
                    "<style> .small {font: italic 13px sans-serif;}"
                    ".heavy{ font: bold 30px sans - serif; }"
                    ".Rrrrr{font: italic 40px serif; fill: red;} </style >"
                    "<text x = \"%d\" y = \"%d\" class = \"small\"> %s </text>"
                    "<text x = \"%d\" y = \"%d\" class = \"heavy\"> %s </text>"
                    "<text x = \"%d\" y = \"%d\" class = \"small\"> %s </text>"
                    "<text x = \"%d\" y = \"%d\" class = \"Rrrrr\"> %s </text>"
                    "</svg>",
            x, y, frase, x1, y1, frase1, x2, y2, frase2, x3, y3, frase3);
}

int main()
{

    char nomeArquivo[20];
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
        texto(arquivo);
        fclose(arquivo);
        printf("Arquivo %s criado com sucesso\n", nomeArquivo);
    }

    return 0;
}