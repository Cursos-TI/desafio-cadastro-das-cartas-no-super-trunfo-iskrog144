#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1;
    char codigo1[4];
    char cidade1[99];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[4];
    char cidade2[99];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("-----Desafio Super Trunfo-----\n");
    printf("\n");
    printf("-----Cadastro da carta 1-----\n");
    printf("\n");
    printf("Digite seu Estado (ex: A-H): ");
    scanf("%c", &estado1);
    printf("Digite o código da carta(ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %98[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%g", &area1);
    printf("Digite o PIB(Bilhões de reais): ");
    scanf("%g", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\n");
    printf("\n");
    printf("-----Cadastro da carta 2-----\n");
    printf("\n");
    printf("\n");
    printf("Digite seu Estado (ex: A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta(ex: A01): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %98[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB(Bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("\n");
    printf("Cartas cadastradas com sucesso!\n");
    printf("\n");
    printf("\n");
    printf("===Carta 1===\n");
    printf("Estado:%c\n", estado1);
    printf("Código da carta:%s\n", codigo1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área em km²:%f\n", area1);
    printf("PIB:%f\n", pib1);
    printf("Pontos Turísticos:%d\n", pontos1 );
    printf("\n");
    printf("\n");
    printf("===Carta 2===\n");
    printf("Estado:%c\n", estado2);
    printf("Código da carta:%s\n", codigo2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área em km²:%f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Pontos Turísticos:%d\n", pontos2 );
    printf("\n");
    printf("\n");
    return 0;
}
