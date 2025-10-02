#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {

int numeroJogador, numeroComputador, resultado;
char tipoComparacao;

//gerar número aleatório entre 1 e 100
srand(time(0));
numeroComputador = rand() % 100 + 1;//número entre 1 e 100

//Inicio do jogo
printf("Ben vindo ao jogo Maior, Menor ou Igual!\n");
printf("Você deve escolher o tipo de comparação e um número de 1 a 100.\n");
printf("M. - Maior\n");
printf("N. - Menor\n");
printf("I. - Igual\n");

printf("Escolha a opção de comparação (M, N ou I): ");
scanf(" %c", &tipoComparacao);

printf("Digite um número entre 1 e 100: ");
scanf("%d", &numeroJogador);




switch (tipoComparacao) {
    case 'M':
    case 'm':/* usado para aceitar maiusculo e minusculo pois não temos a presença do break  apos case 'M' 
    então o código continua a execução. */
        printf("Você escolheu a opção Maior.\n");
        resultado = (numeroJogador > numeroComputador) ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor.\n");
        resultado = (numeroJogador < numeroComputador) ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual.\n");
        resultado = (numeroJogador == numeroComputador) ? 1 : 0;
        break;

    default:
        printf("Tipo de comparação inválido.\n");
        return 1;
}

printf("Número do Computador é %d e o número do Jogador é %d\n", numeroComputador, numeroJogador);

if (resultado == 1) {
    printf("Parabéns! Você ganhou!\n");
} else {
    printf("Que pena! Você perdeu. Tente novamente.\n");
}










    return 0;
}