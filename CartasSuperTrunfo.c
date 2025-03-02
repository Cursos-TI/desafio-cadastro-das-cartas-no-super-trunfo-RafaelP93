#include <stdio.h>

int main() {
    int populacao, populacao2, pontosturisticos, pontosturisticos2;
    char estado[50], estado2[50], codigo[5], codigo2[5], cidade[50], cidade2[50];
    float area, area2, PIB, PIB2, densidadep, densidadep2, PIBpc, PIBpc2, superPoder, superPoder2;

    //Primeira Carta
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Código: \n");
    scanf("%s", &codigo);

    printf("Área em (km²): \n");
    scanf("%f", &area);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    //Segunda Carta
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &cidade2);

    printf("Código: \n");
    scanf("%s", &codigo2);

    printf("Área em (km²): \n");
    scanf("%f", &area2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidadep = populacao / area;
    densidadep2 = populacao2 / area2;

    PIBpc = PIB / populacao;
    PIBpc2 = PIB2 / populacao2;

    superPoder = populacao + area + PIB + PIBpc + pontosturisticos + (1 / densidadep);
    superPoder2 = populacao2 + area2 + PIB2 + PIBpc2 + pontosturisticos2 + (1 / densidadep2);

    //Carta 1
    printf("***CARTA 01***\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área em km²: %.2f\n", area);
    printf("População: %d\n", populacao);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %f\n", densidadep);
    printf("PIB per capita: %f\n", PIBpc);
    printf("Super Poder: %.2f\n", superPoder);


    //Carta 2
    printf("***CARTA 02***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área em km²: %.2f\n", area2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidadep2);
    printf("PIB per capita: %f\n", PIBpc2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Comparação das Cartas
    printf("***Carta 1 Venceu: 1 / Carta 2 Venceu: 0***\n");
    printf("Área em km²: %d\n", area > area2);
    printf("População: %d\n", populacao > populacao2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("PIB per capita: %d\n", PIBpc > PIBpc2);
    printf("Densidade Populacional: %d\n", (1 / densidadep) > (1 / densidadep2));
    printf("Pontos Turisticos: %d\n", pontosturisticos > pontosturisticos2);
    printf("Super Poder: %d\n", superPoder > superPoder2);



    return 0;
      


    
}