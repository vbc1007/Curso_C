#include <stdio.h>
#include <string.h> //Biblioteca para scanear strings
#include <ctype.h> // Biblioteca para manipular caracteres

int main ()
{

    float num1, num2, resultado;
    char conta[20];
    int operacaoValida = 0;
    // Essa é a variável de controle (nosso semáforo)
    // 0 = Ainda não deu certo (continua perguntando)
    // 1 = Deu certo (pode parar)
    
    printf("Insira um numero\n");
        scanf("%f", &num1);

    printf("Insira novamente outro numero\n");
        scanf("%f", &num2);

    //Inicio do Loop
    // Enquanto (while) a operação NÃO for válida (0), repita isso:
    while (operacaoValida == 0) 
    {
     printf("Você deseja fazer uma conta de soma, subtracao, divisao ou multiplicacao com os 2 números escolhidos? obs: escreva sem acento\n");
        scanf("%s", conta);

        //Loop que converte a palavra inteira para minúsculo
    for(int i = 0; conta[i]; i++) {
        conta[i] = tolower(conta[i]); 
    }
    
    if (strcmp(conta, "soma") == 0)
    {
        resultado = num1 + num2;
            printf("O resultado da sua soma eh igual a: %.2f\n", resultado);
            operacaoValida = 1; // <--- SINAL VERDE
    }

    else if (strcmp(conta, "subtracao") == 0)
    {
        resultado = num1 - num2;
            printf("O resultado da sua subtracao eh igual a: %.2f\n", resultado);
            operacaoValida = 1; // <--- SINAL VERDE
    }

    else if (strcmp(conta, "divisao") == 0)
    {
        //  Proteção contra divisão por zero
        if (num2 != 0) 
        {
            resultado = num1 / num2;
            printf("O resultado da sua divisao eh igual a: %.2f\n", resultado);
            operacaoValida = 1; // <--- SINAL VERDE
        } 
        else 
        {
            printf("Erro: Impossivel dividir por zero!\n");
            // Aqui NÃO coloco valida=1, para ele dar a chance de escolher outra conta
        }
    }

    else if (strcmp(conta, "multiplicacao") == 0)
    {
        resultado = num1 * num2;
            printf("O resultado da sua multiplicacao eh igual a: %.2f\n", resultado);
            operacaoValida = 1; // <--- SINAL VERDE
    }

    // Este else final pega qualquer coisa que não seja as 4 palavras acima
    else 
    {
        printf("Opcao invalida! A palavra %s. Por favor digite apenas: soma, subtracao, divisao ou multiplicacao.\n", conta);
    }
    //Fim do Loop
    }

    return 0;
}