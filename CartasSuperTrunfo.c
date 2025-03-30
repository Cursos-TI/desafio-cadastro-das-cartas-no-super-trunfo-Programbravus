#include <stdio.h>

int main()
{
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Cadastro da primeira cidade
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda cidade
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados das cidades
    printf("\nDados da primeira cidade:\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nDados da segunda cidade:\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}