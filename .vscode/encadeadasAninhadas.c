#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero > 0) {
        if(numero % 2 == 0) {
            printf("O número é positivo e par.\n");
        } else {
            printf("O número é positivo e ímpar.\n");
        }
    } else if (numero == 0) {
        printf("O número é zero.\n");
    } else {
        printf("O número é negativo.\n");
    }

    return 0;
}