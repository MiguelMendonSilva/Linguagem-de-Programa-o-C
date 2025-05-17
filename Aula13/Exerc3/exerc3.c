#include <stdio.h>
#include <string.h>

void ordenacao(char palavra[])
{
    char maior;
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
        {
            if (palavra[j] > palavra[j + 1])
            {
                maior = palavra[j];
                palavra[j] = palavra[j + 1];
                palavra[j + 1] = maior;
            }
        }
    }
}

int main()
{

    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    ordenacao(palavra1);
    ordenacao(palavra2);

    if (strcmp(palavra1, palavra2) == 0)
    {
        printf("São anagramas\n");
    }
    else
    {
        printf("Não são anagramas\n");
    }

    return 0;
}