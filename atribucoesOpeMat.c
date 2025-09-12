#include <stdio.h>

int main() {

    /* Atribuições com operadores matemáticos
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
   
    */

    int numero1 = 10, numero2, resultado;    

    resultado = 10; // Atribuição simples
    printf("Resultado (atribuição simples): %d\n", resultado);

    //resultado = resultado + 20;
    resultado += 20; // Atribuição com soma
    printf("Resultado (atribuição com soma): %d\n", resultado);

    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado (atribuição com subtração): %d\n", resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("Resultado (atribuição com multiplicação): %d\n", resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado (atribuição com divisão): %d\n", resultado);

    

    return 0;
}