#include <stdio.h>
#include <stdlib.h>

int main() {

int idade = 18;
int resultado;
int resultado2;

resultado = (idade >= 18) ? printf("Maior de idade\n") : printf("Menor de idade\n"); 
// operador ternário ele faz a mesma coisa que o if e else, porem de forma mais simplificada


//usando os operadores ternários para atribuição de valores usando if e else
resultado2 = (idade < 18) ? 1 : 0;

if(resultado2 == 1){
    printf("Menor de idade\n");}
else{
    printf("Maior de idade\n");}   

int temperatura;
int resultado3;
printf("Digite a temperatura atual: ");
scanf("%d", &temperatura);


resultado3 = (temperatura > 28) ? printf("Está Calor\n") : printf("Está Frio\n");


int num1, num2, maior;
printf("Digite o primeiro número: ");
scanf("%d", &num1);
printf("Digite o segundo número: ");
scanf("%d", &num2);


num1 > num2 ? (maior = num1) : (maior = num2);
printf("O maior número é: %d\n", maior);






    return 0;
}