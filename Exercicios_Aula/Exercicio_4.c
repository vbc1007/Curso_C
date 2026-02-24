#include <stdio.h>

int soma (int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int main ()
{
    int num1, num2;
    
    printf("Insira 2 numeros\n");
    scanf("%i %i", &num1, &num2);

    int resultadoSoma = soma(num1, num2);

    printf("%i", resultadoSoma);

    return 0;
}