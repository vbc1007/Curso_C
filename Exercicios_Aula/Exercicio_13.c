#include <stdio.h>

int main ()
{
    int num;

    printf("Insira um numero\n");
        scanf("%i", &num);

    if (num % 3 == 0 || num % 5 == 0)
    {
        printf("Numero inserido eh divisivel por 3 ou 5\n");
    }

    else
    {
        printf("Numero inserido nao eh divisivel por 3 ou 5");
    }

return 0;
    
}