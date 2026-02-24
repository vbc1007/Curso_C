#include <stdio.h>

int main()
{
     int num1, num2, result;
    
    printf("Insira um numero inteiro\n");
        scanf("%i", &num1);

    while (num1 == 0)
    {
        printf("Insira um numero maior que 0\n");
            scanf("%i", &num1);
    }
    
    printf("Insira novamente outro numero inteiro para descobrirmos o resto da divisao entre esse e o numero anterior\n");
        scanf("%i", &num2);

    while (num1 < num2 || num2 == 0)
    {
        printf("Insira novamente o 2 segundo numero, ele tendo que ser menor ou igual a %i\n", num1);
            scanf("%i", &num2);
    }

    result = num1 % num2;

    if (result == 0)
    {
        printf("O resto da divisao dos numeros %i e %i eh de %i entao eles sao divisiveis\n", num1, num2, result);
    }
    
    else
    {
    printf("O resto da divisao dos numeros %i e %i eh de %i entao eles nao sao divisiveis\n", num1, num2, result);
    }
    
return 0;
}
