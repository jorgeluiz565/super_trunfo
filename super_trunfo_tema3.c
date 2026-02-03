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

//função do menu e exibição dos dados na tela
void menu(){
    //variável escolha
    int escolha1;
    int escolha2;

    //menu
    printf("\n--- MENU ---\n");
    printf("Escolha dois atributos que deseja comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade populacional \n");
    printf("6. PIB per capita \n");
    printf("7. Super poder \n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &escolha2);

    if(escolha1 == escolha2){
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    }else{
    switch (escolha1)
    {
    case 1:
        printf("\nCarta 1 - %s população: %d \n", cidade1, populacao1);
        printf("Carta 2 - %s população: %d \n", cidade2, populacao2);
        populacao1 > populacao2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 2:
        printf("\nCarta 1 - %s área: %f \n", cidade1, area1);
        printf("Carta 2 - %s área: %f \n", cidade2, area2);
        area1 > area2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 3:
        printf("\nCarta 1 - %s PIB: %f \n", cidade1, pib1);
        printf("Carta 2 - %s PIB: %f \n", cidade2, pib2);
        pib1 > pib2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 4:
        printf("\nCarta 1 - %s pontos turísticos: %d \n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s pontos turísticos: %d \n", cidade2, pontosTuristicos2);
        pontosTuristicos1 > pontosTuristicos2? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 5:
        printf("\nCarta 1 - %s densidade: %f \n", cidade1, densidade1);
        printf("Carta 2 - %s densidade: %f \n", cidade2, densidade2);
        densidade1 < densidade2  ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 6:
        printf("\nCarta 1 - %s PIB per capita: %f \n", cidade1, pibpercapita1);
        printf("Carta 2 - %s PIB per capita: %f \n", cidade2, pibpercapita2);
        pibpercapita1 > pibpercapita2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 7:
        printf("\nCarta 1 - %s super poder: %f \n", cidade1, superPoder1);
        printf("Carta 2 - %s super poder: %f \n", cidade2, superPoder2);
        superPoder1 > superPoder2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    default:
        printf("\nOpção inválida");
    break;
    }
    switch (escolha2)
    {
    case 1:
        printf("\nCarta 1 - %s população: %d \n", cidade1, populacao1);
        printf("Carta 2 - %s população: %d \n", cidade2, populacao2);
        populacao1 > populacao2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 2:
        printf("\nCarta 1 - %s área: %f \n", cidade1, area1);
        printf("Carta 2 - %s área: %f \n", cidade2, area2);
        area1 > area2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 3:
        printf("\nCarta 1 - %s PIB: %f \n", cidade1, pib1);
        printf("Carta 2 - %s PIB: %f \n", cidade2, pib2);
        pib1 > pib2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 4:
        printf("\nCarta 1 - %s pontos turísticos: %d \n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s pontos turísticos: %d \n", cidade2, pontosTuristicos2);
        pontosTuristicos1 > pontosTuristicos2? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 5:
        printf("\nCarta 1 - %s densidade: %f \n", cidade1, densidade1);
        printf("Carta 2 - %s densidade: %f \n", cidade2, densidade2);
        densidade1 < densidade2  ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 6:
        printf("\nCarta 1 - %s PIB per capita: %f \n", cidade1, pibpercapita1);
        printf("Carta 2 - %s PIB per capita: %f \n", cidade2, pibpercapita2);
        pibpercapita1 > pibpercapita2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    case 7:
        printf("\nCarta 1 - %s super poder: %f \n", cidade1, superPoder1);
        printf("Carta 2 - %s super poder: %f \n", cidade2, superPoder2);
        superPoder1 > superPoder2 ? printf("Carta 1 venceu\n") : printf("Carta 2 venceu\n");
    break;
    default:
        printf("\nOpção inválida");
    break;
    }
    }

    
};

//função main
int main()
{
    entradaCarta1();
    entradaCarta2();
    densidade();
    pibpercapita();
    superPoder();
    menu();

return 0;

}
