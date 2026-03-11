#include <stdio.h>

int main() {

    char Estado1[20], Estado2[20];
    char cidade1[20], cidade2[20];
    char codigoCarta1[10], codigoCarta2[10];

    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;

    float area1, area2;
    float PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    // Cadastro da primeira cidade
    printf("Nome do Estado 1: ");
    scanf("%s", Estado1);

    printf("Codigo da carta 1: ");
    scanf("%s", codigoCarta1);

    printf("Nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Area da cidade 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda cidade
    printf("\nNome do Estado 2: ");
    scanf("%s", Estado2);

    printf("Codigo da carta 2: ");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Area da cidade 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2: ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = PIB1 / populacao1;
    pibpercapita2 = PIB2 / populacao2;

    // Exibindo os dados
    printf("\n--- DADOS CADASTRADOS ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    return 0;
}