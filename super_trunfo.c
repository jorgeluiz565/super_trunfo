#include <stdio.h>;
#include <string.h>;

int main()
{
    char estado1, estado2, codigo1[3], codigo2[3], nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("==== CARTA 1 ====\n");

    printf("Digite uma letra para o estado(A até H): ");
    scanf("%c", &estado1);

    printf("Digite um código para a carta com a letra do estado(01 até 04): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em m²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade(EX. 1.23): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("==== CARTA 1 ====\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área total: %.3f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);

     printf("\n");

}
