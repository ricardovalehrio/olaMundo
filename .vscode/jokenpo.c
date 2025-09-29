#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("*** Bem-vindo ao Jokenpo! ***\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

    switch (escolhaJogador)
    {
    case 1: // Pedra
        printf("Você escolheu Pedra.\n");
        break;

    case 2: // Papel
        printf("Você escolheu Papel.\n");
        break;

    case 3: // Tesoura
        printf("Você escolheu Tesoura.\n");
        break;

    default:
        printf("Escolha inválida! Por favor, escolha 1, 2 ou 3.\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador escolheu Pedra.\n");
        break;
    case 2:
        printf("Computador escolheu Papel.\n");
        break;
    case 3:
        printf("Computador escolheu Tesoura.\n");
        break;
    }

    // Determina o vencedor
    if (escolhaJogador == escolhaComputador)
    {
        printf("### Empate! ###\n");
    }
    else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
             (escolhaJogador == 2 && escolhaComputador == 1) ||
             (escolhaJogador == 3 && escolhaComputador == 2))
    {
        printf("*** Você venceu! ***\n");
    }
    else
    {
        printf("xxx Você perdeu! xxx\n");
    }

    return 0;
}
