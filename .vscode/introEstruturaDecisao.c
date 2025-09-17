#include <stdio.h>
int main() {

int maca;
int laranja = 100.0;

printf("Digite a quantidade de maçãs: \n");
scanf("%d", &maca);


if (maca >= laranja) 
{
    printf("Tem mais maçãs do que laranjas.\n");
}
else {
    printf("Tem mais laranjas do que maçãs.\n");
}

int idade;

printf("Digite sua idade: \n");
scanf("%d", &idade);

if (idade >= 16) {
    printf("Você pode votar!.\n");
}
else {
    printf("Você ainda não pode votar!.\n");
}

int nota;

printf("Digite sua nota: \n");
scanf("%d", &nota);

if (nota >= 60) {
    printf("Aprovado!\n");
}
else {
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
}
else if (preco1 > preco2) 
{
    printf("O segundo produto é mais barato.\n");
}
else if (preco1 == preco2) {
    printf("Os dois produtos têm o mesmo preço.\n");
}


return 0;
}