#include <stdio.h>

int main ()
{
    float num1, num2;

    printf("Insira um numero inteiro\n");
        scanf("%f", &num1);

    do 
    {
     printf("Insira outro numero inteiro menor ou igual que o  primeiro numero insirido\n");
        scanf("%f", &num2);

    if (num1 < num2)
    {
        printf("Numero Invalido\n");
    }
    }while (num1 < num2);

    //num1 += num2;
    //num1 -= num2;
    //num1 *= num2;
    //num1 /= num2;
    num1 %= num2;

    printf("O valor da soma eh igual a: %.2f\n", num1);

    return 0;
}