#include <stdio.h>

int main() {

    // Carta 1
    char estado1[20], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2[20], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super1, super2;

    // ===== Entrada Carta 1 =====
    printf("Carta 1:\n");
    scanf("%s", estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nome1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    // ===== Entrada Carta 2 =====
    printf("Carta 2:\n");
    scanf("%s", estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nome2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Super poder (com conversão)
    super1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // ===== Comparações =====
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", 
        populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n", 
        area1 > area2 ? 1 : 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
        pib1 > pib2 ? 1 : 2, pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
        pontos1 > pontos2 ? 1 : 2, pontos1 > pontos2);

    // MENOR vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);

    printf("Super Poder: Carta %d venceu (%d)\n", 
        super1 > super2 ? 1 : 2, super1 > super2);

    return 0;
}