#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolhaJ1, numJ1, numJ2, soma;

    //0f. Limpa a tela para ficar mais limpo a tela
    system("cls");

    printf("=== JOGO DE PAR OU IMPAR ===\n\n");

    //1.0. Escolha de par ou impar
    printf("Jogador 1, escolha:\n");
    printf("[0] para PAR\n");
    printf("[1] para IMPAR\n");
         scanf("%i", &escolhaJ1);
    
    //1.1. Caso o Jogador 1 escolha um numero diferente de 0 e 1
    while (escolhaJ1 != 0 && escolhaJ1 != 1)
    {
        printf("\nEscolha invalida!\nEscolha:\n");
        printf("[0] para PAR\n");
        printf("[1] para IMPAR\n");
            scanf("%i", &escolhaJ1);
    }
    
    //1.2. Mostrando quem e par e quem e impar
    if (escolhaJ1 == 0)
    {
        printf("\nJogador 1: PAR\n");
        printf("Jogador 2: IMPAR");
    }

    //1.2. Mostrando quem e par e quem e impar
    else
    {
        printf("Jogador 1: IMPAR\n");
        printf("Jogador 2: PAR\n");
    }
    

    // 2.0. Jogadores digitam seus números
    printf("\nJogador 1, digite o seu numero: ");
        scanf("%i", &numJ1);

    // 2.1.Limpa a tela para o Jogador 2 não ver o número
    system("cls");

    //2.2. para o Jogador 2 saber o que está acontecendo
    printf("Vez do Jogador 2!\n");
   
    printf("Jogador 2, digite o seu numero: ");
        scanf("%i", &numJ2);

    //2.3. Limpa a tela para ficar mais limpo a tela
    system("cls");

    // 3.0. Processamento (Soma e Verificação)
    soma = numJ1 + numJ2;
    printf("\nA soma de %i + %i = %i\n", numJ1, numJ2, soma);

    //3.1. Se o resto da divisão por 2 for 0, o número é PAR.
    if (soma % 2 == 0) 
    {
        printf("O resultado eh PAR!\n\n");
        
        // 4.0. Verifica quem venceu
        if (escolhaJ1 == 0) 
        {
            printf(">>> PARABENS JOGADOR 1, VOCE VENCEU! <<<\n");
        } 
        
        else 
        {
            printf(">>> PARABENS JOGADOR 2, VOCE VENCEU! <<<\n");
        }
    } 
    
    else 
    {
        printf("O resultado eh IMPAR!\n\n");
        
        // 4.0. Verifica quem venceu
        if (escolhaJ1 == 1) 
        {
            printf(">>> PARABENS JOGADOR 1, VOCE VENCEU! <<<\n");
        } 
        
        else 
        {
            printf(">>> PARABENS JOGADOR 2, VOCE VENCEU! <<<\n");
        }
    }

    return 0;
}