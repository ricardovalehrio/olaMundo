#include <stdio.h>

int main() {
    int idade = 32;
    float altura = 1.70;
    char opcao = 'S';
    char nome[20] = "Ricardo";

    printf("A idade do %s é %d anos.\n", nome, idade);
    printf("Sua altura é %.2f\n", altura);
    printf("A opção escolhida foi: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);
    %d - int imprime um inteiro no formato decimal.
    %i - Equivalente a %d, usado para inteiros.
    %f - float imprime um número de ponto flutuante no formato padrão.
    %e - float imprime um número de ponto flutuante em notação científica. 
    %c - char imprime um caractere.
    %s - char imprime uma string (sequência de caracteres).
    %u - Imprime um inteiro sem sinal (unsigned).
    \n - pula uma nova linha.
    \t - Tabulação horizontal.
    .2f - Formata um número de ponto flutuante para exibir 2 casas decimais.
    20s - Formata uma string para ocupar um campo de 20 caracteres, alinhado à direita.
    -20s - Formata uma string para ocupar um campo de 20 caracteres, alinhado à esquerda.
    05d - Formata um inteiro para ocupar um campo de 5 dígitos  
    */

    return 0;
}