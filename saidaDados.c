#include <stdio.h>

int main() {

    int idade;
    float altura;
    char opcao;
    char nome[30];
    //sintaxe scanf("%formato1" "formato2, &variavel1, variavel2, ...);

    printf("Digite sua idade: ");
    scanf("%d", &idade); //%d para inteiros
    printf("Digite sua altura: ");
    scanf("%f", &altura); //%f para float
    printf("Digite seu nome: ");
    scanf("%s", nome); //%s para string não precisa usar o & pois o nome já é um endereço
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &opcao); //%c para char lembrando do espaço antes do %c para consumir qualquer caractere de nova linha pendente no buffer
    

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);32
    printf("Nome: %s\n", nome);
    printf("Inicial do nome: %c\n", opcao);

    return 0;
}