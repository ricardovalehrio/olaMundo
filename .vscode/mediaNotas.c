#include <stdio.h>

int main() {

    int nota1, nota2, nota3;// usando inteiro para forçar o casting, o correto seria usar float
    float media;

    printf("*** Calculadora de Média de 03 Notas ***\n");
    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;// conversão explícita de inteiro para float usando 'casting'

    printf("A média é: %.1f\n", media);

    return 0;
}
