#include <stdio.h>

int main() {

int dia;

printf("Digite um número de 1 a 7 para verificar o dia da semana correspondente usando if: \n");
scanf("%d", &dia);

if (dia == 1) {
    printf("Domingo\n");
} else if (dia == 2) {
    printf("Segunda-feira\n");
} else if (dia == 3) {
    printf("Terça-feira\n");
} else if (dia == 4) {
    printf("Quarta-feira\n");
} else if (dia == 5) {
    printf("Quinta-feira\n");
} else if (dia == 6) {
    printf("Sexta-feira\n");
} else if (dia == 7) {
    printf("Sábado\n");
} else {
    printf("Número inválido. Por favor, digite um número entre 1 e 7.\n");
}

int diaSwitch;

printf("Digite um número de 1 a 7 para verificar o dia da semana correspondente usando switch: \n");
scanf("%d", &diaSwitch);
switch (diaSwitch) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Número inválido. Por favor, digite um número entre 1 e 7.\n");
        break;
}










    return 0;
}