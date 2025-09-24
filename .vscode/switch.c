#include <stdio.h>

int main () {

int numero;// variável para armazenar o valor digitado pelo usuário poderia ser uma letra ou palavra desde que não comece com número e não seja palavra reservada da linguagem C

printf("Digite um valor inteiro: \n");
scanf("%d", &numero);
switch (numero)
{
case 1:
    printf("Código a ser executado se numero escolhido for == 1\n");
    printf("Outro código a ser executado se numero == 1\n");
    break;
case 2:
    printf("Código a ser executado se numero == 2\n");
    break;
default:
    printf("Código a ser executado se numero não for igual a nenhum dos valores \n");
    break;
}







    return 0;
}