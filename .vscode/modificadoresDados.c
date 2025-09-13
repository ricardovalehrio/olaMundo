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

        double numeroPreciso = 3.141592653589793; // double padrão
        double numeroMuitoPreciso = 3.141592653589793238463; // long double para maior precisão porém para microsoft long double ou double é  mesma coisa

        printf("Número preciso (double): %.15f\n", numeroPreciso);
        printf("Número muito preciso (long double): %.21lf\n", numeroMuitoPreciso);// %lf para long double em alguns compiladores

        unsigned long int numeroGrandePositivo = 4000000000; // Correto, pois unsigned long int
        unsigned int numeroPositivo = 4000000000; // Correto, pois unsigned int
        long long int numeroGrande2 = 4000000000; // Incorreto, ultrapassa o limite de long int
        int numero = 4000000000; // Incorreto, ultrapassa o limite de int

        printf("Número grande positivo (unsigned long int): %lu\n", numeroGrandePositivo);
        printf("Número positivo (unsigned int): %u\n", numeroPositivo); 
        printf("Número grande (long long int): %lld\n", numeroGrande2);
        printf("Número (int): %d\n", numero);

        short int numeroPequeno = 32767; // Correto, dentro do limite de short int
        printf("Número pequeno (short int): %hd\n", numeroPequeno);

        numeroPequeno = 32768; // Incorreto, ultrapassa o limite de short int
        printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

        printf("\n*** Tamanho das variáveis ***\n");
        printf("Short int: %lu B - int: %lu B - Long int: %lu B - Long long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long int), sizeof(long long int));
        printf("Float: %lu B - Double: %lu B - Long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));



        return 0;
    }
        