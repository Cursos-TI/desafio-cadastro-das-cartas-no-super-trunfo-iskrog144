#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este programa cadastra 2 cartas de cidades com atributos personalizados e exibe o resultado.

int main() {
    // Declaração de variáveis para a carta 1
    char estado1;            // Armazena a letra do estado (ex: 'A')
    char codigo1[4];         // Código da carta (até 3 caracteres + '\0')
    char cidade1[99];        // Nome da cidade (até 98 caracteres + '\0')
    int populacao1;          // População como inteiro
    char area1_str[100];     // Área lida como string (permite incluir unidades)
    char pib1_str[100];      // PIB lido como string
    int pontos1;             // Número de pontos turísticos como inteiro

    // Declaração de variáveis para a carta 2 (mesmos atributos)
    char estado2;
    char codigo2[4];
    char cidade2[99];
    int populacao2;
    char area2_str[100];
    char pib2_str[100];
    int pontos2;

    // * Início do cadastro da carta 1 *
    printf("-----Desafio Super Trunfo-----\n\n");
    printf("-----Cadastro da carta 1-----\n\n");

    // Lê o estado (letra)
    printf("Digite seu Estado (ex: A-H): ");
    scanf(" %c", &estado1);

    // Lê o código da carta
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    getchar(); // Consome o '\n' deixado pelo scanf

    // Lê o nome da cidade usando fgets para capturar espaços
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    // Remove o '\n' que o fgets coloca no final da string
    if (cidade1[strlen(cidade1)-1] == '\n')
        cidade1[strlen(cidade1)-1] = '\0';

    // Lê a população (número inteiro)
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o buffer

    // Lê a área completa como string (incluindo " km²" se quiser)
    printf("Digite a área em km²: ");
    fgets(area1_str, sizeof(area1_str), stdin);
    if (area1_str[strlen(area1_str)-1] == '\n')
        area1_str[strlen(area1_str)-1] = '\0';

    // Lê o PIB completo como string
    printf("Digite o PIB (Bilhões de reais): ");
    fgets(pib1_str, sizeof(pib1_str), stdin);
    if (pib1_str[strlen(pib1_str)-1] == '\n')
        pib1_str[strlen(pib1_str)-1] = '\0';

    // Lê o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);


    // * Início do cadastro da carta 2 *
    printf("\n-----Cadastro da carta 2-----\n\n");

    // Estado da carta 2
    printf("Digite seu Estado (ex: A-H): ");
    scanf(" %c", &estado2);
    getchar();

    // Código da carta 2
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo2);
    getchar();

    // Nome da cidade 2
    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    if (cidade2[strlen(cidade2)-1] == '\n')
        cidade2[strlen(cidade2)-1] = '\0';

    // População da carta 2
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    getchar();

    // Área da carta 2
    printf("Digite a área em km²: ");
    fgets(area2_str, sizeof(area2_str), stdin);
    if (area2_str[strlen(area2_str)-1] == '\n')
        area2_str[strlen(area2_str)-1] = '\0';

    // PIB da carta 2
    printf("Digite o PIB (Bilhões de reais): ");
    fgets(pib2_str, sizeof(pib2_str), stdin);
    if (pib2_str[strlen(pib2_str)-1] == '\n')
        pib2_str[strlen(pib2_str)-1] = '\0';

    // Pontos turísticos da carta 2
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);


    // Exibe as cartas cadastradas
    printf("\nCartas cadastradas com sucesso!\n\n");
    // Exibição detalhada da carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %s\n", area1_str);
    printf("PIB: %s\n", pib1_str);
    printf("Número de Pontos Turísticos: %d\n\n", pontos1);

    // Exibição detalhada da carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %s\n", area2_str);
    printf("PIB: %s\n", pib2_str);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0; // Finaliza o programa
}
