#include <stdio.h>

float calcula_area_retangulo (float base, float altura);

int main () 
{

    float base, altura;

    printf("Insira a base e altura do retangulo, respectivamente\n");
    scanf("%f %f", &base, &altura);

    printf("A area do retangulo eh igual a: %.2f", calcula_area_retangulo(base, altura));

return 0;
}

float calcula_area_retangulo (float base, float altura)
{
    return base * altura;
}