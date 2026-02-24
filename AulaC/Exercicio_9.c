#include <stdio.h>

int main ()
{
    int num1 = 0, 
    num2 = 0;

    while (num1 == num2)
    {

    printf("Insira dois numeros inteiros, para vermos qual eh o maior entre eles\n");
        scanf("%i %i", &num1, &num2);

        if (num1 == num2)
    {
        printf("Os numeros sao iguais. Por favor, tente novamente\n");
    }

    }
        if (num1 > num2)
    {
        printf("O numero %i eh maior que o numero %i", num1, num2);
    }

    else if (num1 < num2)
    {
         printf("O numero %i eh maior que o numero %i", num2, num1);
    }

    return 0;
}