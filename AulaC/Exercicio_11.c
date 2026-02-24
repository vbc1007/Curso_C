#include <stdio.h>

int main ()
{
   int num1, num2;
   
    printf("Insira um numero\n");
        scanf("%i", &num1);

    printf("Insira novamente um numero\n");
        scanf("%i", &num2);

    printf("%s\n", (num1 > 0 && num2 > 0 )? "Condicao verdadeira": "Condicao falsa");

return 0;

}