
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

    printf("--- VENCEDORA---\n");

    if(populacao1 > populacao2){
      printf("A carta 1 tem maior populacao. Carta 1 VENCEU!");
    }else{
      printf("A carta 2 tem maior populacao. Carta 2 VENCEU!");
    }
    return 0;

}
