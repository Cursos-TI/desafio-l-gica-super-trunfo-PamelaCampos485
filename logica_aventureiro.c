
#include <stdio.h>

int main(){
    //variáveis carta 1 e 2
    char estado1;
    char estado2;

    char codigoestado1[10];
    char codigoestado2[10];

    char cidade1[50];
    char cidade2[50];

    unsigned long int populacao1;
    unsigned long int populacao2;

    float area1;
    float area2;

    float pib1;
    float pib2;

    int pontos1;
    int pontos2;

    //Variáveis calculadas

    float densidade1;
    float densidade2;

    float pibPercapita1;
    float pibPercapita2;

    float superpoder1;
    float superpoder2;

    printf("=== CARTA 1 ===\n");

    printf("Estado de 'A ate H':\n");
    scanf(" %c", &estado1);

    printf("Codigo do estado de '0 a 10':\n");
    scanf("%s", codigoestado1);

    printf("Cidade:\n");
    scanf("%s", cidade1);

    printf("Populacao:\n");
    scanf("%lu", &populacao1);

    printf("Area:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    printf("Densidade: %.2f\n", densidade1);

    pibPercapita1 = pib1 / populacao1;
    printf("PIB per Capita: %.2f\n", pibPercapita1);

    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibPercapita1 +(1 / densidade1);
    printf("Super poder: %.2f\n", superpoder1);


    printf("=== CARTA 2 ===\n");

    printf("Estado de 'A ate H':\n");
    scanf(" %c", &estado2);

    printf("Codigo do estado de '0 a 10':\n");
    scanf("%s", codigoestado2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("Populacao:\n");
    scanf("%lu", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    printf("Densidade:%.2f\n", densidade2);

    pibPercapita2 = pib2 / populacao2;
    printf("PIB Per Capita:%.2f\n", pibPercapita2);

    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibPercapita2 + (1/ densidade2);
    printf("Super poder:%.2f\n", superpoder2);

    int opcao;

    printf("\n---COMPARACAO DE CARTAS---\n");
    printf("Escolha um atributo:\n");
    printf("1- Populacao\n");
    printf("2- Area\n");
    printf("3- PIB\n");
    printf("4- Pontos turisticos\n");
    printf("5- Densidade Demografica\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nComparacao por Populacao\n");
        printf("%s: %lu\n", cidade1, populacao1);
        printf("%s: %lu\n", cidade2, populacao2);

        if(populacao1 > populacao2){
            printf("%s venceu!\n", cidade1);
        }else if(populacao2 > populacao1){
            printf("%s venceu!\n", cidade2);
        }else{
            printf("Empate!\n");
        }
    break;
    case 2:
        printf("\nComparacao por Area\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);

        if(area1 > area2){
            printf("%s venceu!\n", cidade1);
        }else if(area2 > area1){
            printf("%s venceu!\n", cidade2);
        }else{
            printf("Empate!\n");
        }
    break;
    case 3:
        printf("\nComparacao por PIB\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if(pib1 > pib2){
            printf("%s venceu!\n", cidade1);
        }else if(pib2 > pib1){
            printf("%s venceu!\n", cidade2);
        }else{
            printf("Empate!\n");
        }
    break;
    case 4:
        printf("\nComparacao por Pontos Turisticos\n");
        printf("%s: %d\n", cidade1, pontos1);
        printf("%s: %d\n", cidade2, pontos2);

        if(pontos1 > pontos2){
            printf("%s venceu!\n", cidade1);
        }else if(pontos2 > pontos1){
            printf("%s venceu!\n", cidade2);
        }else{
            printf("Empate!\n");
        }
    break;
    case 5:
        printf("\nComparacao por Densidade\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n", cidade2, densidade2);

        if(densidade1 < densidade2){
            printf("%s venceu!\n", cidade1);
        }else if(densidade2 < densidade1){
            printf("%s venceu!\n", cidade2);
        }else{
            printf("Empate!\n");
        }
    break;
    default:
        printf("Opcao invalida!\n");
    break;
    }


    return 0;

}
