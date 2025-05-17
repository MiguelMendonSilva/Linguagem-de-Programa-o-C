#include <stdio.h>

void triangulo_direita(int numero)
{

    // Triangulo da letra D
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 0; j <= numero - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void triangulo_esquerda(int numero)
{

    // Triangulo da letra A
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    char letra;
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    do
    {

        printf("Digite A para posisicionar a esquerda, D a direita ou F para sair: ");
        scanf(" %c", &letra);

        if (letra == 'A')
        {
            triangulo_esquerda(numero);
        }

        if (letra == 'D')
        {
            triangulo_direita(numero);
        }

    } while (letra != 'F');

    return 0;
}