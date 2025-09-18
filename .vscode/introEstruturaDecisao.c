#include <stdio.h>
int main() {

/* Estrutura de decisão if, else if e else é uma estrutura de controle que 
permite executar diferentes blocos de código com base em uma condição específica verdadeira.
if (condição) {
    // comando1 = bloco de código a ser executado se a condição for verdadeira
} else if (outra_condição) {
    // comando2 = bloco de código a ser executado se a outra condição for verdadeira
} else {
    // comando3 = bloco de código a ser executado se nenhuma das condições anteriores for verdadeira
}


*/ 
int numero1, numero2;

numero1 = 10;
numero2 = 5;

if (numero1 > numero2) {
    printf("O primeiro número é maior que o segundo.\n");
} 

int maca;
int laranja = 100.0;

printf("Digite a quantidade de maçãs: \n");
scanf("%d", &maca);


if (maca >= laranja) 
{
    printf("Tem mais maçãs do que laranjas.\n");
} else {
    printf("Tem mais laranjas do que maçãs.\n");
}

int idade;

printf("Digite sua idade: \n");
scanf("%d", &idade);

if (idade >= 16) {
    printf("Você pode votar!.\n");
} else {
    printf("Você ainda não pode votar!.\n");
}

int nota;

printf("Digite sua nota: \n");
scanf("%d", &nota);

if (nota >= 60) {
    printf("Aprovado!\n");
} else {
    printf("Reprovado!\n");
}

float preco1;
float preco2;

printf("Digite o preço do primeiro produto: \n");
scanf("%f", &preco1);

printf("Digite o preço do segundo produto: \n");
scanf("%f", &preco2);

if (preco1 < preco2) 
{
    printf("O primeiro produto é mais barato.\n");
} else if (preco1 > preco2) 
{
    printf("O segundo produto é mais barato.\n");
} else if (preco1 == preco2) {
    printf("Os dois produtos têm o mesmo preço.\n");
}

float temperatura;

printf("Digite a temperatura em graus Celsius: \n");
scanf("%f", &temperatura);

if (temperatura > 30.0) {
    printf("Está calor!\n");
} else if (temperatura < 15.0) {
    printf("Está frio!\n");
} else {
    printf("Está agradável!\n");
}

return 0;
}