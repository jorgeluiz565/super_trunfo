#include <stdio.h>

int main()
{
    //declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Entrada de dados da carta 1
    printf("==== CARTA 1 ====\n");
    printf("Digite uma letra para o estado(A até H): ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta(Ex: A01): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade(EX. 1.23): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Entrada de dados da carta 2
    printf("\n==== CARTA 2 ====\n");
    printf("Digite uma letra para o estado(A até H): ");
    scanf(" %c", &estado2);

    printf("Digite um código para a carta(Ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade(EX. 1.23): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos dados na tela
    printf("\n=====================\n");
    printf("======= CARTAS ======\n");
    printf("=====================\n");

    printf("\n==== CARTA 1 ====\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área total: %.3f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);

    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área total: %.3f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);

return 0;

}
