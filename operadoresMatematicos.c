#include <stdio.h>

int main() {

   /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    //Operação soma
    soma = numero1 + numero2;

    //Operação subtração
    subtracao = numero1 - numero2;

    //Operação multiplicação
    multiplicacao = numero1 * numero2;

    //Operação divisão
    divisao = numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;
}