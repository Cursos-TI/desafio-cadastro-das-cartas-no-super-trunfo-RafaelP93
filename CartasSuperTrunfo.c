#include <stdio.h>

int main() {
    int populacao, pontosturisticos;
    char estado[50], codigo[5], cidade[50];
    float area, PIB;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área em km²: %f\n", area);
    printf("População: %d\n", populacao);
    printf("PIB: %f\n", PIB);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    return 0;

}