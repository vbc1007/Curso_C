#include <stdio.h>

float calcular_media(int nota1, int nota2, int nota3)
{
    return ((nota1 + nota2 + nota3)/ 3.0);
}

int main ()
{
   int nota1, nota2, nota3;
   
    printf("Insira as 3 notas do aluno\n");
    scanf("%i %i %i", &nota1, &nota2, &nota3);

    //float media = calcular_media(nota1, nota2, nota3);

    printf("A media do aluno foi de: %.2f", calcular_media(nota1, nota2, nota3));

return 0;
}