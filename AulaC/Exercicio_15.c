#include <stdio.h>

int main ()
{
    int num1, num2, result;
    
    printf("Insira um numero inteiro\n");
        scanf("%i", &num1);

    printf("Insira novamente outro numero inteiro para descobrirmos o resto da divisao entre esse e o numero anterior\n");
        scanf("%i", &num2);

    while (num1 < num2)
    {
        printf("Insira novamente o 2 segundo numero, ele tendo que ser menor que %i\n", num1);
            scanf("%i", &num2);
    }

    result = num1 % num2;
    
    printf("O resto da divisao dos numeros %i e %i eh de %i\n", num1, num2, result);

    
return 0;
}