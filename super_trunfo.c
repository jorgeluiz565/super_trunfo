#include <stdio.h>

//declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;
    int pontosTuristicos1;
    float superPoder1;

//declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;
    int pontosTuristicos2;
    float superPoder2;

//função entrada de dados da carta 1
void entradaCarta1(){
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
};

//função entrada de dados da carta 2
void entradaCarta2(){
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
};

//função que calcula a densidade populacional
float densidade(){
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
};

//função que calcula a renda per capita
float pibpercapita(){
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
};

float superPoder(){
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densidade2);
};

//funçaõ de exibição dos dados na tela
void exibicao(){
    //Exibição dos dados na tela
    printf("\n=====================\n");
    printf("======= CARTAS ======\n");
    printf("=====================\n");

    printf("\n==== CARTA 1 ====\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área total: %.3f km² \n", area1);
    printf("PIB: %.2f bilhões \n", pib1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %.2f km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);
    printf("Super Poder: %.2f \n", superPoder1);

    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área total: %.3f km² \n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f km² \n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);
    printf("Super Poder: %.2f \n", superPoder2);

    printf("\n COMPARAÇÃO DAS CARTAS \n");
    printf("População: (%d)\n", populacao1 > populacao2);
    printf("Área: (%d)\n", area1 > area2);
    printf("PIB: (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional: (%d)\n", densidade1 < densidade2);
    printf("PIB per capita: (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: (%d)\n", superPoder1 > superPoder2);

};

int main()
{
    entradaCarta1();
    entradaCarta2();
    densidade();
    pibpercapita();
    superPoder();
    exibicao();

return 0;

}
