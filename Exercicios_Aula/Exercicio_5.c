#include <stdio.h>

float soma_numeros_reais(float num1, float num2)
{
    return (num1 + num2);
}

int main ()
{
   float num1, num2;
   
    printf("Insira 2 numeros reais\n");
    scanf("%f %f", &num1, &num2);

    float resultado = soma_numeros_reais(num1, num2);

    printf("%.2f", resultado);

return 0;
}