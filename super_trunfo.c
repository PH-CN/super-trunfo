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
    float result1, result2;

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

    int opcao1, opcao2;

    printf("Escolha qual será a primeira propriedade a ser comparada para determinar o vencedor.\n");
    printf("O valor mais alto será o vencedor, com excessão da densidade demográfica, cuja menor densidade será a vencedora.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu a opção: População.\n");
        printf("Valor da primeira carta - %lu || Valor da segunda carta - %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("A carta 1 possui uma população maior, portanto ganhou.\n");
        } else if (populacao1 < populacao2) {
            printf("A carta 2 possui uma população maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += populacao1;
        result2 += populacao2;
        break;
    case 2:
        printf("Você escolheu a opção: Área.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", area1, area2);
         if (area1 > area2) {
            printf("A carta 1 possui uma área maior, portanto ganhou.\n");
        } else if (area1 < area2) {
            printf("A carta 2 possui uma área maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += area1;
        result2 += area2;        
        break;
    case 3:
        printf("Você escolheu a opção: PIB.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", pib1, pib2);
        if (pib1 > pib2) {
            printf("A carta 1 possui um PIB maior, portanto ganhou.\n");
        } else if (pib1 < pib2) {
            printf("A carta 2 possui um PIB maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += pib1;
        result2 += pib2;
        break;
    case 4:
        printf("Você escolheu a opção: Número de pontos turísticos.\n");
        printf("Valor da primeira carta - %d || Valor da segunda carta - %d\n", turisticos1, turisticos2);
        if (turisticos1 > turisticos2) {
            printf("A carta 1 possui um número de pontos turísticos maior, portanto ganhou.\n");
        } else if (turisticos1 < turisticos2) {
            printf("A carta 2 possui um número de pontos turísticos maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += turisticos1;
        result2 += turisticos2;
        break;
    case 5:
        printf("Você escolheu a opção: Densidade demográfica.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", densidade1, densidade2);
        if (densidade1 < densidade2) {
            printf("A carta 1 possui uma densidade demográfica menor, portanto ganhou.\n");
        } else if (densidade1 > densidade2) {
            printf("A carta 2 possui uma densidade demográfica menor , portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += densidade1;
        result2 += densidade2;
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    printf("Escolha qual será a segunda propriedade a ser comparada para determinar o vencedor.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você selecionou 2 atributos iguais, finalizando o programa.\n");
    } else {
        switch (opcao2)
    {
    case 1:
        printf("Você escolheu a opção: População.\n");
        printf("Valor da primeira carta - %lu || Valor da segunda carta - %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
            printf("A carta 1 possui uma população maior, portanto ganhou.\n");
        } else if (populacao1 < populacao2) {
            printf("A carta 2 possui uma população maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += populacao1;
        result2 += populacao2;
        break;
    case 2:
        printf("Você escolheu a opção: Área.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", area1, area2);
        if (area1 > area2) {
            printf("A carta 1 possui uma área maior, portanto ganhou.\n");
        } else if (area1 < area2) {
            printf("A carta 2 possui uma área maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += area1;
        result2 += area2;
        break;
    case 3:
        printf("Você escolheu a opção: PIB.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", pib1, pib2);
        if (pib1 > pib2) {
            printf("A carta 1 possui um PIB maior, portanto ganhou.\n");
        } else if (pib1 < pib2) {
            printf("A carta 2 possui um PIB maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += pib1;
        result2 += pib2;
        break;
    case 4:
        printf("Você escolheu a opção: Número de pontos turísticos.\n");
        printf("Valor da primeira carta - %d || Valor da segunda carta - %d\n", turisticos1, turisticos2);
        if (turisticos1 > turisticos2) {
            printf("A carta 1 possui um número de pontos turísticos maior, portanto ganhou.\n");
        } else if (turisticos1 < turisticos2) {
            printf("A carta 2 possui um número de pontos turísticos maior, portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += turisticos1;
        result2 += turisticos2;
        break;
    case 5:
        printf("Você escolheu a opção: Densidade demográfica.\n");
        printf("Valor da primeira carta - %.2f || Valor da segunda carta - %.2f\n", densidade1, densidade2);
        if (densidade1 < densidade2) {
            printf("A carta 1 possui uma densidade demográfica menor, portanto ganhou.\n");
        } else if (densidade1 > densidade2) {
            printf("A carta 2 possui uma densidade demográfica menor , portanto ganhou.\n");
        } else {
            printf("Houve um empate!\n");
        }
        result1 += densidade1;
        result2 += densidade2;
        break;
    default:
        printf("Opção inválida.");
        break;
        }
    }
    printf("Comparação FINAL!!\n");
    printf("Carta 1: %s VS Carta 2: %s\n", nome1, nome2);
    printf("Valor da soma dos atributos escolhidos para a carta 1: %.2f\n", result1);
    printf("Valor da soma dos atributos escolhidos para a carta 2: %.2f\n", result2);
    if (result1 > result2) {
        printf("A Carta 1: %s tem a soma dos atributos maior, portanto ganhou!\n", nome1);
    } else if (result1 < result2) {
        printf("A Carta 2: %s tem a soma dos atributos maior, portanto ganhou!\n", nome2);
    } else {
        printf("É um empate!!\n");
    }
    return 0;
}
