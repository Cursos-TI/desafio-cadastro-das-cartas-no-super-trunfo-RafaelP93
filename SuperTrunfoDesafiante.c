#include <stdio.h>

int main() {
    int população, população2, pontosturisticos, pontosturisticos2, escolhaCarta, escolhaAtributo;
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
    scanf("%d", &população);

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
    scanf("%d", &população2);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    //Calculos de Atributos
    densidadep = população / area;
    densidadep2 = população2 / area2;

    PIBpc = PIB / população;
    PIBpc2 = PIB2 / população2;

    superPoder = população + area + PIB + PIBpc + pontosturisticos + (1 / densidadep);
    superPoder2 = população2 + area2 + PIB2 + PIBpc2 + pontosturisticos2 + (1 / densidadep2);

    //Menu do Jogo
    printf("Escolha qual sua carta\n");
    printf("1.");
    printf("%s\n", estado);
    printf("2.");
    printf("%s\n", estado2);
    scanf("%d", &escolhaCarta);

    switch (escolhaCarta)
    {
    case 1:
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área em km²: %.2f\n", area);
    printf("População: %d\n", população);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %f\n", densidadep);
    printf("PIB per capita: %f\n", PIBpc);
    printf("Super Poder: %.2f\n", superPoder);
        break;
    case 2:
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área em km²: %.2f\n", area2);
    printf("População: %d\n", população2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidadep2);
    printf("PIB per capita: %f\n", PIBpc2);
    printf("Super Poder: %.2f\n", superPoder2);
        break;
    default:
    printf("opção inválida");
        break;
    }

    //Menu de atributos
    printf("###Escolha qual atributo você quer comparar!###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1:
        printf("###Sua carta:###\n");
        printf("%s\n", estado);
        printf("%d\n", população);
        printf("###Carta do adversário:###\n");
        printf("%s\n", estado2);
        printf("%d\n", população2);
        if (população > população2)
        {
            printf("Você ganhou!");
        }else if (população < população2)
        {
            printf("Você perdeu!");
        }else{
            printf("Empate");

        }    
    break;
    case 2:
        printf("###Sua carta:###\n");
        printf("%s\n", estado);
        printf("%f\n", area);
        printf("###Carta do adversário:###\n");
        printf("%s\n", estado2);
        printf("%f\n", area2);
        if (area > area2)
        {
            printf("Você ganhou!");
        }else if (area < area2)
        {
            printf("Você perdeu!");
        }else{
            printf("Empate");

        }
    break;
    case 3:
        printf("###Sua carta:###\n");
        printf("%s\n", estado);
        printf("%f\n", PIB);
        printf("###Carta do adversário:###\n");
        printf("%s\n", estado2);
        printf("%f\n", PIB2);
        if (PIB > PIB2)
        {
            printf("Você ganhou!");
        }else if (PIB < PIB2)
        {
            printf("Você perdeu!");
        }else{
            printf("Empate");

        }
    break;
    case 4:
        printf("###Sua carta:###\n");
        printf("%s\n", estado);
        printf("%d\n", pontosturisticos);
        printf("###Carta do adversário:###\n");
        printf("%s\n", estado2);
        printf("%d\n", pontosturisticos2);
        if (pontosturisticos > pontosturisticos2)
        {
            printf("Você ganhou!");
        }else if (pontosturisticos < pontosturisticos2)
        {
            printf("Você perdeu!");
        }else{
            printf("Empate");

        }
    break;
    case 5:
        printf("###Sua carta:###\n");
        printf("%s\n", estado);
        printf("%f\n", densidadep);
        printf("###Carta do adversário:###\n");
        printf("%s\n", estado2);
        printf("%f\n", densidadep2);
        if (densidadep < densidadep2)
        {
            printf("Você ganhou!");
        }else if (densidadep > densidadep2)
        {
            printf("Você perdeu!");
        }else{
            printf("Empate");

        }
    break;
    default:
        printf("Opção inválida");
        break;
    }
    

}