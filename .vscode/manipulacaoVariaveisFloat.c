#include <stdio.h>

int main() {
    float a = 5.5;// double(numeros maiores) também poderia ser usado porém float economiza memória
    float b = 2.2;
    float soma = a + b;
    float diferenca = a - b;
    float produto = a * b;
    float quociente = a / b;

    printf("A soma de %.2f e %.2f é %.2f\n", a, b, soma);
    printf("A diferença é %.2f\n", diferenca);
    printf("O produto é %.2f\n", produto);
    printf("O quociente é %.2f\n", quociente);

    return 0;
}
