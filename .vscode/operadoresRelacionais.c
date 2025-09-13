#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Operadores relacionais
    printf("a == b: %d\n", a == b); // Igualdade - igual a
    printf("a != b: %d\n", a != b); // Desigualdade - diferente de 
    printf("a > b: %d\n", a > b);   // Maior que
    printf("a < b: %d\n", a < b);   // Menor que
    printf("a >= b: %d\n", a >= b); // Maior ou igual a
    printf("a <= b: %d\n", a <= b); // Menor ou igual a


    int x =5;
    float y =5.0;
    char c = 'a';

    printf("x == y: %d\n", x == y); // Igualdade entre int e float
    printf("x != y: %d\n", x != y); // Desigualdade entre int e float
    printf("x >= y: %d\n", x >= y);   // Maior ou igual a
    printf("x >= c: %d\n", x >= c); // Maior ou igual a - converção implícita char para int (valor ASCII)
    printf("O valor ASCII de %c é: %d\n", c, c); // Valor ASCII do caractere

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2); // Maior que
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2); // Igualdade






    return 0;
}