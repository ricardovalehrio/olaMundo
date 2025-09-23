#include <stdio.h>

int main() {

int idade;

printf("Digite sua idade: \n");
scanf("%d", &idade);

if (idade < 12) {
    printf("Você é uma Criança\n");
} else if (idade >= 12 && idade < 18) {
    printf("Você é um Adolescente\n");
} else if (idade >= 18 && idade < 60) {
    printf("Você é um Adulto\n");
} else {
    printf("Você é um Idoso\n");
}

int nota;

printf("Digite sua nota: \n");
scanf("%d", &nota);

if (nota >= 90) {
    printf("Conceito A!\n");
} else if (nota >= 80) {
    printf("Conceito B!\n");
} else if (nota >= 70) {
    printf("Conceito C!\n");
} else if (nota >= 60) {
    printf("Conceito D!\n");
} else {
    printf("Reprovado! Conceito F!\n");
}



    return 0;
}