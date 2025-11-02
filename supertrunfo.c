   #include <stdio.h>

int main() {
    // Carta 1
    int turistico1, populacao1;
    double km1, densidade1, superpoder1;
    double pib1, percapita1;
    char estado1[3], cidade1[50], numero1[5];

    // Carta 2
    int turistico2, populacao2;
    double km2, densidade2, superpoder2;
    double pib2, percapita2;
    char estado2[3], cidade2[50], numero2[5];

    int  turistico, populacao;
        float km, pib, densidade, percapita, superpoder;
        char estado[3], cidade[50], numero[5];

    printf("****SUPER TRUNFO - CIDADES****\n\n");

    // -------- Carta 1 --------
    printf("Nome da cidade 1 (sem espaço): ");
    scanf("%s", cidade1);

    printf("Sigla do estado: ");
    scanf("%s", estado1);

    printf("Número da carta: ");
    scanf("%s", numero1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área total (km²): ");
    scanf("%lf", &km1);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / km1;
    percapita1 = (pib1 * 1e9) / populacao1; // PIB total dividido pela população
    superpoder1 = populacao1 + km1 + pib1 + turistico1 + percapita1 + (1 / densidade1);

    // -------- Carta 2 --------
    printf("\nNome da cidade 2 (sem espaço): ");
    scanf("%s", cidade2);

    printf("Sigla do estado: ");
    scanf("%s", estado2);

    printf("Número da carta: ");
    scanf("%s", numero2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área total (km²): ");
    scanf("%lf", &km2);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / km2;
    percapita2 = (pib2 * 1e9) / populacao2;
    superpoder2 = populacao2 + km2 + pib2 + turistico2 + percapita2 + (1 / densidade2);

    // -------- Impressão --------
    printf("\n****Valores impressos****\n");

    printf("Cidade 1: %s (%s)\n", cidade1, estado1);
    printf("Código: %s\n", numero1);
    printf("População: %d\n", populacao1);
    printf("Área total: %.2f km²\n", km1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\nCidade 2: %s (%s)\n", cidade2, estado2);
    printf("Código: %s\n", numero2);
    printf("População: %d\n", populacao2);
    printf("Área total: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Superpoder: %.2f\n", superpoder2);

        printf("****Comparação dos poderes****\n");

        populacao = populacao1 > populacao2;
        km = km1 > km2;
        pib = pib1 > pib2;
        turistico = turistico1 > turistico2;
        densidade = densidade1 < densidade2;
        percapita = percapita1 > percapita2;
        superpoder = superpoder1 > superpoder2;

        printf ("A população da carta 1 é maior que da carta 2 ? %d\n", populacao1 > populacao2);
        printf ("A Area total da carta 1 é maior que da carta 2 ? %d\n", km1 > km2 );
        printf ("O pib da carta 1 é maior que da carta 2 ? %d\n", pib1 > pib2);
        printf ("O Numero de pontos turisticos da carta 1 é maior que da carta 2 ? %d\n", turistico1 > turistico2);
        printf ("A densidade da carta 1 é menor que da carta 2 ?: %d\n", densidade1 < densidade2);
        printf ("O Pib percapita da carta 1 é maior que da carta 2 ? %d\n", percapita1 > percapita2);
        printf ("O super poder da carta 1 é maior que da carta 2 ? %d\n", superpoder1 > superpoder2);



        return 0;
    }
