#include <stdio.h>

int multiplicacao_numeros_inteiros(int a, int b)
{
    return(a * b);
}

int main ()
{
    int num1, num2;
    
    printf("Insira 2 numeros inteiros\n");
    scanf("%i %i", &num1, &num2);

    int resultado = multiplicacao_numeros_inteiros(num1, num2);

    printf("%i", resultado);

return 0;
}