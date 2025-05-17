#include <stdio.h>

int main()
{

    int maior;

    int vetor[5] = {9, 8, 7, 6, 3};

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                maior = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = maior;
            }

            printf("%d", vetor[i]);
        }

        printf("\n");
    }

    return 0;
}