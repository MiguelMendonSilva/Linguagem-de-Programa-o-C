#include <stdio.h>

int main(void)
{

    FILE *pArquivo = NULL;

    pArquivo = fopen("quadrado.svg", "w");
    char *svg = "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\"><rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" /> </svg>";

    if (pArquivo == NULL)
    {
        printf("O arquivo não foi aberto");
    }
    else
    {
        fprintf(pArquivo, "%s", svg);
        fclose(pArquivo);
    }

    return 0;
}
