#include <stdio.h>

int main() {
    // Operadores lógicos em C são usados para combinar expressões condicionais. exemplos são:
    // && (E lógico): Retorna verdadeiro se ambas as expressões forem verdadeiras.
    // || (OU lógico): Retorna verdadeiro se pelo menos uma das expressões for verdadeira.
    // ! (NÃO lógico): Inverte o valor da expressão.

   int a = 10, b = -5;

   if (a > 0 && b > 0) {
        printf("Os dois números são positivos.\n");}
    else {
        printf("Pelo menos um dos números é negativo.\n");}
    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo.\n");}
    else {
        printf("Os dois números são negativos.\n");}

    int a2 = 10;

    if (!(a2 > 0)) {
        printf("A variável a2 é negativa.\n");
    } else {
        printf("A variável a2  é positiva.\n");}

    
    


// precedência dos operadores lógicos:
// 1. ! (NÃO lógico)
// 2. && (E lógico)
// 3. || (OU lógico)
// Use parênteses para garantir a ordem desejada de avaliação.

//Ordem seguindo o exemplo abaixo:
// a3 > 0 = verdadeiro (test da primeira expressão)
// b3 < 0 = verdadeiro (teste da segunda expressão)
// Verdadeiro && Verdadeiro = Verdadeiro (resultado da operação E lógico)
// Verdadeiro || c3 == 0 (teste da terceira expressão, que é falso)
// Verdadeiro || Falso = Verdadeiro (resultado final da operação OU lógico)




    int a3 = 5;
    int b3 = -10;
    int c3 = 1;

    if(a3 > 0 && b3 < 0 || c3 == 0) {
        printf("A condição é verdadeira.\n");
    } else {
        printf("A condição é falsa.\n");
    }

    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada.\n");
    } else {
        printf("Você não atende aos requisitos.\n");
    }







       return 0;
}
