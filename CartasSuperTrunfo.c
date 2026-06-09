#include <stdio.h>

float getDensidadePopulacional(int populacao, float areaCidade);
float getPIBPerCapita(int populacao, float pib);

int main()
{
    // Informacoes da primeira carta
    char estado;                 // caractere do estado
    char codCarta[10];           // codigo (id) da carta
    char cidade[15];             // nome da cidade
    int populacao;               // quantidade da populacao
    float areaKm;                // area em quilometros da cidade
    float pib;                   // pib da cidade
    int totalPontosTuristicos;   // quantidade total de pontos turisticos
    float densidadePopulacional; // Densidade populacional
    float pibPerCapita;          // PIB per capita

    char estado2;
    char codCarta2[10];
    char cidade2[15];
    int populacao2;
    float areaKm2;
    float pib2;
    int totalPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    printf("********** Super Trunfo *********\n\n");
    printf("- Cadastro da Carta 1 -\n\n");

    printf("Digite o caractere do estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("População total da cidade: ");
    scanf("%d", &populacao);

    printf("Área total da cidade em Km: ");
    scanf("%f", &areaKm);

    printf("PIB total da cidade: ");
    scanf("%f", &pib);

    printf("Quantidade total de pontos turísticos: ");
    scanf("%d", &totalPontosTuristicos);

    densidadePopulacional = getDensidadePopulacional(populacao, areaKm);
    pibPerCapita = getPIBPerCapita(populacao, pib);

    printf("\nCarta 1 cadastrada com sucesso!\n");

    printf("\n- Cadastro da Carta 2 -\n\n");

    printf("Digite o caractere do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("População total da cidade: ");
    scanf("%d", &populacao2);

    printf("Área total da cidade em Km: ");
    scanf("%f", &areaKm2);

    printf("PIB total da cidade: ");
    scanf("%f", &pib2);

    printf("Quantidade total de pontos turísticos: ");
    scanf("%d", &totalPontosTuristicos2);

    densidadePopulacional2 = getDensidadePopulacional(populacao2, areaKm2);
    pibPerCapita2 = getPIBPerCapita(populacao2, pib2);

    printf("\n\n*** Cartas Cadastradas ***\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais",
           estado, codCarta, cidade, populacao, areaKm, pib, totalPontosTuristicos, densidadePopulacional, pibPerCapita);

    printf("\n\nCarta 2:\n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais",
           estado2, codCarta2, cidade2, populacao2, areaKm2, pib2, totalPontosTuristicos2, densidadePopulacional2, pibPerCapita2);
    return 0;
}

float getDensidadePopulacional(int populacao, float areaCidade)
{
    return (float)populacao / areaCidade;
}

float getPIBPerCapita(int populacao, float pib)
{
    return pib / (float)populacao;
}