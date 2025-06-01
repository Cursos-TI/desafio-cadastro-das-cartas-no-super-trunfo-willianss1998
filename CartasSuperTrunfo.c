#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float areaKm1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (Ex: A01 B01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população (milhões de habitantes): ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: A01 B01) : ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população:(milhões de habitantes) ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibindo dados da carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %1.f milhões de habitantes\n", populacao1 / 10.000);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Exibindo dados da carta 2
    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.2f milhoes de habitantes\n", populacao2 /10.000);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
