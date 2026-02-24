#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira 2 numeros\n");
        scanf("%i %i", &num1, &num2);

    if (num1 %2 == 0 && num2 %2 == 0)
    {
        printf("Ambos os numeros sao pares\n");
    }

    else if (num1 %2 == 0 || num2 %2 == 0)
    {
        printf("Apenas um numero eh par\n");
    }

    else
    {
        printf("Nenhum numero eh par");
    }

    return 0;
    
}