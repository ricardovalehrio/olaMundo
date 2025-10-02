#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {

int resultado1, resultado2;
char primeiroAtributo, segundoAtributo;
int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;


// Gerar número aleatório
srand(time(0));
ataque1 = 1; // rand() % 100 + 1; // número entre 1 e 100
ataque2 = 0; // rand() % 100 + 1; // número entre 1 e 100
defesa1 = 1; // rand() % 100 + 1; // número entre 1 e 100
defesa2 = 0; // rand() % 100 + 1; // número entre 1 e 100
recuo1 = 0; // rand() % 100 + 1; // número entre 1 e 100
recuo2 = 1; // rand() % 100 + 1; // número entre 1 e 100

// Inicio do jogo
printf("Bem vindo ao jogo Desafio do Mestre!\n");
printf("Escolha o primeiro atributo:\n");
printf("A. Ataque\n");
printf("D. Defesa\n");
printf("R. Recuo\n");

printf("Escolha a opção de comparação (A, D ou R): ");
scanf(" %c", &primeiroAtributo);

switch (primeiroAtributo) {
    case 'A':
    case 'a':
        printf("Você escolheu o atributo Ataque.\n");
        resultado1 = (ataque1 > ataque2) ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu o atributo Defesa.\n");
        resultado1 = (defesa1 > defesa2) ? 1 : 0;
        break;
    case 'R':
    case 'r':
        printf("Você escolheu o atributo Recuo.\n");
        resultado1 = (recuo1 > recuo2) ? 1 : 0;
        break;

    default:
        printf("Opção inválida.\n");
        break;

    }

    printf("Escolha o segundo atributo:\n");
    printf("Atenção: escolha um atributo diferente do primeiro\n");

    printf("Escolha a opção de comparação (A, D ou R): ");
    scanf(" %c", &segundoAtributo);

    if(segundoAtributo == primeiroAtributo) {
        printf("Você deve escolheu o mesmo atributo.\n");
    } else {
        switch (segundoAtributo) {
            case 'A':
            case 'a':
                printf("Você escolheu o atributo Ataque.\n");
                resultado2 = (ataque1 > ataque2) ? 1 : 0;
                break;
            case 'D':
            case 'd':
                printf("Você escolheu o atributo Defesa.\n");
                resultado2 = (defesa1 > defesa2) ? 1 : 0;
                break;
            case 'R':
            case 'r':
                printf("Você escolheu o atributo Recuo.\n");
                resultado2 = (recuo1 > recuo2) ? 1 : 0;
                break;

            default:
                printf("Opção inválida.\n");
                break;

        }
    }

    if (resultado1  && resultado2) {
        printf("Parabéns! Você ganhou!\n");
    } else if (resultado1 != resultado2) {
        printf("Empate!\n");
    } else {
        printf("Que pena! Você perdeu. Tente novamente.\n");
    }


    return 0;
}