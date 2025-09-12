#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
    printf("A soma de %d e %.2f é %.2f\n", a, b, resultado);
    return 0;
}
