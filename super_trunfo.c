#include <stdio.h>

main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nome1[30], nome2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float super1, super2;

    printf("Digite uma letra de A a H para a primeira carta, representando um dos 8 estados disponíveis\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, sendo ele um número de 01 a 04\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade, se ele conter espaços, junte o nome em uma única palavra ('ex: RioDeJaneiro')\n");
    scanf("%s", &nome1);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²)\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade\n");
    scanf("%d", &turisticos1);

    densidade1 = (float) populacao1 / area1;
    pibpc1 = (float) (pib1 * 1000000000) / populacao1;
    super1 = (float) populacao1 + area1 + turisticos1 + pibpc1 + (1 / densidade1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %0.2f hab/km²\n", densidade1);
    printf("PIB per Capita %0.2f reais\n", pibpc1);
    printf("Valor do Super Poder: %0.2f\n", super1);

    printf("Digite uma letra de A a H para a segunda carta, representando um dos 8 estados disponíveis\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, sendo ele um número de 01 a 04\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade, se ele conter espaços, junte o nome em uma única palavra ('ex: RioDeJaneiro')\n");
    scanf("%s", &nome2);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²)\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade\n");
    scanf("%d", &turisticos2);

    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) (pib2 * 1000000000) / populacao2;
    super2 = (float) populacao2 + area2 + turisticos2 + pibpc2 + (1 / densidade2);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %0.2f hab/km²\n", densidade2);
    printf("PIB per Capita %0.2f reais\n", pibpc2);
    printf("Valor do Super Poder: %0.2f\n", super2);

    printf("Comparação das cartas: se o valor for '1', a Carta 1 venceu, se o valor for '0', a Carta 2 venceu\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibpc1 > pibpc2);
    printf("Super Poder %d\n", super1 > super2);

    return 0;
}
