#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Cidades com Cálculo de Densidade Populacional e PIB per Capita

int main() {
    // Variáveis para atributos da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[99];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;      // Armazena a densidade populacional da cidade 1
    float pibPerCapita1;   // Armazena o PIB per capita da cidade 1

    // Variáveis para atributos da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[99];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;      // Armazena a densidade populacional da cidade 2
    float pibPerCapita2;   // Armazena o PIB per capita da cidade 2

    // Cadastro da carta 1
    printf("-----Desafio Super Trunfo-----\n\n");
    printf("-----Cadastro da carta 1-----\n\n");

    // Leitura dos dados da carta 1
    printf("Digite seu Estado (ex: A-H): ");
    scanf(" %c", &estado1); // Lê o caractere do estado
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1); // Lê uma string com até 3 caracteres para o código
    getchar(); // Limpa o buffer para permitir uso correto do fgets abaixo
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade (com espaços)
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove a quebra de linha do final da string
    printf("Digite a população: ");
    scanf("%d", &populacao1); // Lê a população da cidade
    printf("Digite a área em km²: ");
    scanf("%f", &area1); // Lê a área da cidade
    printf("Digite o PIB (Bilhões de reais): ");
    scanf("%f", &pib1); // Lê o PIB em bilhões de reais
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1); // Lê o número de pontos turísticos

    // Cadastro da carta 2
    printf("\n-----Cadastro da carta 2-----\n\n");

    // Leitura dos dados da carta 2
    printf("Digite seu Estado (ex: A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar(); // Limpa o buffer antes do fgets
    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (Bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo de densidade populacional e PIB per capita para carta 1
    densidade1 = populacao1 / area1; // densidade = população / área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita = (PIB em reais) / população

    // Cálculo de densidade populacional e PIB per capita para carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das cartas
    printf("\nCartas cadastradas com sucesso!\n\n");

    // Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Mostra densidade com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);       // Mostra PIB per capita com 2 casas decimais

    // Carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n\n\n", pibPerCapita2);

    return 0;
}
