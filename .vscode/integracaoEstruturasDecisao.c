#include <stdio.h>


int main() {

int opcao;
float nota1, nota2, media;

printf("Menu de Gerenciamento de Estudantes\n");
printf("1 - Calcular Média\n");
printf("2 - Determinar Status\n");
printf("3 - Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch(opcao) {
    case 1:

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        //Testar se a nota é >= 0 e <= 10 usando if e else
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            media = (nota1 + nota2) / 2;
            printf("A Média é: %.2f\n", media);
        } else {
            printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
        }

        break;
    case 2:

        printf("Determinar Status\n");
        printf("Digite a média: ");
        scanf("%f", &media);
        //Usando operador ternário para determinar se o aluno está aprovado ou reprovado
        //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");
        if (media >= 7) {
        printf("Aprovado!\n");
        } else if (media >= 5 && media < 7) {
        printf("Recuperação!\n");
        } else {
        printf("Reprovado!\n");
        }
     
    break;
    case 3:

        printf("Saindo...\n");

        break;
    default:

        printf("Opção inválida!\n");

    break;
}




    return 0;
}