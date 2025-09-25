#include <stdio.h>

int main() {

int opcao;
float saldo = 1000.00;



printf("Escolha uma opção (1, 2 ou 3): \n");
printf("1. Verifcar saldo\n");
printf("2. Fazer depósito\n");
printf("3. Fazer saque\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("O seu saldo é de R$ %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você deseja utilizar:\n");
        printf("Digite a agência:\n");
        printf("Digite o número da conta:\n");
        break;
    case 3:
        printf("Digite o valor que você deseja sacar:\n");
        float valorSaque;
        scanf("%.2f", &valorSaque);
        if (valorSaque > saldo) {
            printf("Saldo insuficiente.\n");
        } else {
            saldo -= valorSaque;
            printf("Saque de R$ %.2f realizado com sucesso.\n", valorSaque);
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
}









    return 0;
}