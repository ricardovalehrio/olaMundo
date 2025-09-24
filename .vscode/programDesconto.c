#include <stdio.h>

int main() {

/*programa que define se uma pessoa está qualificada para um desconto especial com base na idade e na renda mensal.
A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter um renda mensal abaixo de 2000*/

int idade;
float renda;
printf("Digite sua idade: \n");
scanf("%d", &idade);
printf("Digite sua renda mensal: \n");
scanf("%f", &renda);

if (idade <= 18 || idade > 60) {
    if (renda < 2000) {
        printf("Você está qualificado pelo desconto especial.\n");
    } else {
        printf("Você não está qualificado pelo desconto especial devido à renda.\n");
    }  
} else {
    printf("Você não está qualificado pela idade.\n");
}

// Agora o programa na 1ª condição verifica se a idade está entre 18 e 65 anos
// A 2ª condição verifica se a renda mensal é menor que 3000
// A 3ª condição verifica se o número de dependentes é maior que 2




int idad;
float rend;
int dependentes;

printf("Digite sua idade: \n");
scanf("%d", &idad);
printf("Digite sua renda mensal: \n");
scanf("%f", &rend);
printf("Digite o número de dependentes: \n");
scanf("%d", &dependentes);

if (idad >= 18 && idad < 65) {
    if (rend < 3000) {
        if (dependentes > 2) {
            printf("Você atende a todos os critérios para o desconto especial.\n");
        } else {
            printf("Você não está qualificado pelo desconto especial devido ao número de dependentes.\n");
        }
    } else {
        printf("Você não está qualificado pelo desconto especial devido à renda.\n");
    }
    
} else {
    printf("Você não está qualificado pela idade.\n");
}

return 0;
}