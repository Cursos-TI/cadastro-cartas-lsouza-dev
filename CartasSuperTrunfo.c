#include <stdio.h>

float getDensidadePopulacional(unsigned long int populacao, float areaCidade);
float getPIBPerCapita(unsigned long int populacao, float pib);

float getSuperPoder(
    unsigned long int populacao,
    float areaKm,
    int totalPontosTuristicos,
    float pibPerCapta,
    float densidadePopulacional);

int main()
{
       // Informacoes da primeira carta
       char estado;                 // caractere do estado
       char codCarta[10];           // codigo (id) da carta
       char cidade[15];             // nome da cidade
       unsigned long int populacao; // quantidade da populacao
       float areaKm;                // area em quilometros da cidade
       float pib;                   // pib da cidade
       int totalPontosTuristicos;   // quantidade total de pontos turisticos
       float densidadePopulacional; // Densidade populacional
       float pibPerCapita;          // PIB per capita
       float superPoder; // Soma de todas as propriedades numericas

       char estado2;
       char codCarta2[10];
       char cidade2[15];
       unsigned long int populacao2;
       float areaKm2;
       float pib2;
       int totalPontosTuristicos2;
       float densidadePopulacional2;
       float pibPerCapita2;
       float superPoder2;

       printf("********** Super Trunfo *********\n\n");
       printf("- Cadastro da Carta 1 -\n\n");

       printf("Digite o caractere do estado: ");
       scanf("%c", &estado);

       printf("Digite o código da carta (Ex: A01): ");
       scanf("%s", codCarta);

       printf("Digite o nome da cidade: ");
       scanf("%s", cidade);

       printf("População total da cidade: ");
       scanf("%lu", &populacao);

       printf("Área total da cidade em Km: ");
       scanf("%f", &areaKm);

       printf("PIB total da cidade: ");
       scanf("%f", &pib);

       printf("Quantidade total de pontos turísticos: ");
       scanf("%d", &totalPontosTuristicos);

       densidadePopulacional = getDensidadePopulacional(populacao, areaKm);
       pibPerCapita = getPIBPerCapita(populacao, pib);
       superPoder = getSuperPoder(
              populacao,areaKm,totalPontosTuristicos,pibPerCapita,densidadePopulacional
       );

       printf("\nCarta 1 cadastrada com sucesso!\n");

       printf("\n- Cadastro da Carta 2 -\n\n");

       printf("Digite o caractere do estado: ");
       scanf(" %c", &estado2);

       printf("Digite o código da carta (Ex: A01): ");
       scanf("%s", codCarta2);

       printf("Digite o nome da cidade: ");
       scanf("%s", cidade2);

       printf("População total da cidade: ");
       scanf("%lu", &populacao2);

       printf("Área total da cidade em Km: ");
       scanf("%f", &areaKm2);

       printf("PIB total da cidade: ");
       scanf("%f", &pib2);

       printf("Quantidade total de pontos turísticos: ");
       scanf("%d", &totalPontosTuristicos2);

       densidadePopulacional2 = getDensidadePopulacional(populacao2, areaKm2);
       pibPerCapita2 = getPIBPerCapita(populacao2, pib2);
       superPoder2 = getSuperPoder(
              populacao2,areaKm2,totalPontosTuristicos2,pibPerCapita2,densidadePopulacional2
       );

       printf("\n\n*** Cartas Cadastradas ***\n");

       printf("\nCarta 1:\n");
       printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais",
              estado, codCarta, cidade, populacao, areaKm, pib, totalPontosTuristicos, densidadePopulacional, pibPerCapita);

       printf("\n\nCarta 2:\n");
       printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %lu \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais",
              estado2, codCarta2, cidade2, populacao2, areaKm2, pib2, totalPontosTuristicos2, densidadePopulacional2, pibPerCapita2);



       printf("\n\n******** Comparando as cartas ********\n\n");
       printf("População: %s",populacao > populacao2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nÁrea: %s",areaKm > areaKm2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nPIB: %s",pib > pib2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nPontos Turísticos: %s",totalPontosTuristicos > totalPontosTuristicos2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nDensidade Populacional: %s",densidadePopulacional > densidadePopulacional2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nPIB per Capita: %s",pibPerCapita > pibPerCapita2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       printf("\nSuper Poder: %s",superPoder > superPoder2 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
       return 0;
}

float getDensidadePopulacional(unsigned long int populacao, float areaCidade)
{
       return (float)populacao / areaCidade;
}

float getPIBPerCapita(unsigned long int populacao, float pib)
{
       return pib / (float)populacao;
}

float getSuperPoder(
    unsigned long int populacao,
    float areaKm,
    int totalPontosTuristicos,
    float pibPerCapta,
    float densidadePopulacional)
{
       return  (float) populacao + areaKm  + (float)totalPontosTuristicos + pibPerCapta + (1.0f/densidadePopulacional);
}