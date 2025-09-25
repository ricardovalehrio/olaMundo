#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int opcao;
int numeroSecreto, palpite;


printf("Menu Principal:\n");
printf("1. Iniciar jogo\n");
printf("2. Carregar regras\n");
printf("3. Sair\n");
printf("Escolha uma opção (1-3): ");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("Iniciando o jogo...\n");
        srand(time(0));
        numeroSecreto = rand() % 10; // Número aleatório entre 1 e 9
        printf("Adivinhe o número entre 0 e 9: ");
        scanf("%d", &palpite);
        if (palpite == numeroSecreto) {
            printf("Parabéns! Você adivinhou o número secreto era o %d.\n", numeroSecreto);
        } else {
            printf("Oops! O número secreto era %d.\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Carregando regras...\n");
        printf("Qual a duvida sobre as regras do jogo:\n");
        printf("1. Como funciona o jogo?.\n");
        printf("2. Quantas chances eu tenho?.\n");
        printf("3. o que acontece se eu adivinhar corretamente?\n");
        printf("Escolha uma opção (1-3): ");
        int regras;
        scanf("%d", &regras);
        switch (regras) {
            case 1:
                printf("O jogo gera um número aleatório entre 0 e 9, e você deve tentar adivinhá-lo.\n");
                break;
            case 2:
                printf("Você tem uma chance para adivinhar o número correto.\n");
                break;
            case 3:
                printf("Se você adivinhar corretamente, você ganha o jogo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
}









    return 0;
}