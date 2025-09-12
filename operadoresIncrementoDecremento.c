#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */
    int numero1 =1, resultado;
    printf("Valor inicial de numero1: %d\n", numero1);

    numero1++; //pós-incremento
    printf("Valor após incremento: %d\n", numero1);

    numero1--; //pós-decremento
    printf("Valor após decremento: %d\n", numero1);

    resultado = numero1++; //pós-incremento
    printf("Após pós-incremento, numero1: %d e resultado: %d\n", numero1, resultado);

    resultado = ++numero1; //pré-incremento
    printf("Após pré-incremento, numero1: %d e resultado: %d\n", numero1, resultado);

    resultado = numero1--; //pós-decremento
    printf("Após pós-decremento, numero1: %d e resultado: %d\n", numero1, resultado);

    resultado = --numero1; //pré-decremento
    printf("Após pré-decremento, numero1: %d e resultado: %d\n", numero1, resultado);

   return 0;
}
