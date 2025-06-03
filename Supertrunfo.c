#include <stdio.h>

int main() {
    // Dados da Carta 1
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Dados da Carta 2
    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
