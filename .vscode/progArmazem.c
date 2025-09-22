#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Digite a temperatura (em graus Celsius): ");
    scanf("%f", &temperatura);

    printf("Digite a umidade (em porcentagem): ");
    scanf("%f", &umidade);

    printf("Digite a quantidade em estoque (em unidades): ");
    scanf("%u", &estoque);

    if (temperatura >30) {
        printf("A temperatura está muito alta para o armazenamento.\n");
    } else {
        printf("A temperatura está adequada para o armazenamento.\n");
    }

    if (umidade > 50) {
        printf("A umidade está muito alta para o armazenamento.\n");
    } else {
        printf("A umidade está adequada para o armazenamento.\n");
    }

    if (estoque < estoqueminimo) {
        printf("O estoque está baixo. Considere reabastecer.\n");
    } else {
        printf("O estoque está adequado.\n");
    }

    return 0;
}
