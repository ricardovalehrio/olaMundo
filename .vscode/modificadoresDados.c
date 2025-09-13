/**
 * @brief Esta seção demonstra modificadores de dados em programação C
 * 
 * Os modificadores de dados incluem:
 * - signed: permite valores positivos e negativos (padrão para maioria dos tipos)
 * - unsigned: permite apenas valores positivos (0 e acima)
 * - short: reduz o tamanho de um tipo inteiro
 * - long: aumenta o tamanho de um tipo inteiro
 * - const: torna o valor da variável imutável
 * 
 * Combinações comuns:
 * - unsigned int: 0 até 4.294.967.295 (32 bits)
 * - long int: -2.147.483.648 até 2.147.483.647 (32 bits)
 * - short int: -32.768 até 32.767 (16 bits)
 * 
 * O uso afeta:
 * - Alocação de memória
 * - Intervalos de valores
 * - Mutabilidade das variáveis
 */

 #include <stdio.h>

    int main() {
        // Exemplo de uso de modificadores de dados
        int numeroSinal = 3000000000; // Este valor excede o limite de um int normal ele vai trabalhar na faixa negativa -1294967296
        unsigned int numeroSemSinal = 3000000000; // Correto, pois é unsigned

        printf("Número com sinal: %d\n", numeroSinal);
        printf("Número sem sinal: %u\n", numeroSemSinal);


        int numeroNormal = 2147483647; // Limite máximo para int com sinal
        long int numeroGrande = 2147483647; // Correto, pois long

        printf("Número regular (int): %d\n", numeroNormal);
        printf("Número grande (long int): %ld\n", numeroGrande);

        numeroGrande = 2147483648; // valor maior que o limite de int
        printf("Número grande atualizado (long long int): %lld\n", numeroGrande);

        printf("Tamanho de int: %zu bytes\n", sizeof(int));
        printf("Tamanho de long int: %zu bytes\n", sizeof(long int));
        printf("Tamanho de long long int: %zu bytes\n", sizeof(long long int));
        printf("Tamanho de double: %zu bytes\n", sizeof(double));
        printf("Tamanho de long double: %zu bytes\n", sizeof(long double));

        return 0;
    }
        