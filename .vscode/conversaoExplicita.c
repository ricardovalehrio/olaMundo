#include <stdio.h>

int main() {

    int a = 10;
    float b = 3;
    float quociente = (float) a / b; /*conversão explícita de 'a' para float, 
    o (float) antes da variável a indica 'casting' um armazenamento 
    para variavel do tipo float para não haver erros de precisão e 
    arrendodamento, é uma boa prática*/

    printf("O quociente de %d e %.2f é %.2f\n", a, b, quociente);


    return 0;
}
