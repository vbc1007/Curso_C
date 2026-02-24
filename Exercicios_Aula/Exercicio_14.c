#include <stdio.h>

int main ()
{
    int num;

    printf("Insira um numero inteiro, e veja se vc acertou o numero\n");
        scanf("%i", &num);

    while (num != 10)
    {
        printf("Voce errou o numero tente novamente\n");
            scanf("%i", &num);
    }

    printf("Parabens escolheu o numero 10 que eh o correto!!!");

return 0;
    
}