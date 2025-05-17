#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[11];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int metade = tamanho / 2;
    int fim = tamanho - 1;
    int palindromo = 1; /* True */

    for (int i = 0; i < metade; i++)
    {
        if (palavra[i] != palavra[fim])
        {
            palindromo = 0; /* False */
            break;
        }
        fim--;
    }

    if (palindromo)
    {
        printf("Resultado: é um palíndromo\n");
    }
    else
    {
        printf("Resultado: NÃO É!\n");
    }

    return 0;
}