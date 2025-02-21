#include <stdio.h>

int main() {
    int população, pontosturisticos;
    char estado[50], codigo[5], cidade[50];
    float area, PIB;

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

    printf("Qual p PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área em km²: %f\n", area);
    printf("População: %d\n", população);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d", pontosturisticos);

    return 0;
}
