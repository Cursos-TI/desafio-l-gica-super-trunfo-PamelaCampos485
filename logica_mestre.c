

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

    int opcao2;

    float valor1carta1, valor1carta2;
    float valor2carta1, valor2carta2;

    float soma1, soma2;

    printf("\n---COMPARACAO DE CARTAS---\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1- Populacao\n");
    printf("2- Area\n");
    printf("3- PIB\n");
    printf("4- Pontos turisticos\n");
    printf("5- Densidade Demografica\n");
    scanf("%d", &opcao);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if(opcao != 1)
        printf("1- Populacao\n");
    if(opcao !=2)
        printf("2- Area\n");
    if(opcao !=3)
        printf("3- PIB\n");
    if(opcao !=4)
        printf("4- Pontos turisticos\n");
    if(opcao !=5)
        printf("5- Densidade Demografica\n");
    scanf("%d", &opcao2);

    switch(opcao){
    case 1:
        valor1carta1 = populacao1;
        valor1carta2 = populacao2;
        break;
    case 2:
        valor1carta1 = area1;
        valor1carta2 = area2;
        break;
    case 3:
        valor1carta1 = pib1;
        valor1carta2 = pib2;
        break;
    case 4:
        valor1carta1 = pontos1;
        valor1carta2 = pontos2;
        break;
    case 5:
        valor1carta1 = densidade1;
        valor1carta2 = densidade2;
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    switch(opcao2){
    case 1:
        valor2carta1 = populacao1;
        valor2carta2 = populacao2;
        break;
    case 2:
        valor2carta1 = area1;
        valor2carta2 = area2;
        break;
    case 3:
        valor2carta1 = pib1;
        valor2carta2 = pib2;
        break;
    case 4:
        valor2carta1 = pontos1;
        valor2carta2 = pontos2;
        break;
    case 5:
        valor2carta1 = densidade1;
        valor2carta2 = densidade2;
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    soma1 = valor1carta1 + valor2carta1;
    soma2 = valor1carta2 + valor2carta2;
 
    printf("\n--- RESULTADO FINAL ---\n");

    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if(soma1 == soma2){
        printf("Empate!\n");
    }else{
        char *vencedor = (soma1 > soma2) ? cidade1 : cidade2;
        printf("%s venceu!\n", vencedor);
    }

    return 0;

}
