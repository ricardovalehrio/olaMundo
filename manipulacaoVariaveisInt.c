#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;// note que o resultado será um número inteiro

    printf("A soma de %d e %d é %d\n", a, b, soma);
    printf("A diferença é %d\n", diferenca);
    printf("O produto é %d\n", produto);
    printf("O quociente é %d\n", quociente);

    return 0;
}