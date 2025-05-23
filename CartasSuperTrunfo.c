#include <stdio.h>

//Teste ELIEZER 

int main() {

    int numero1 = 1, numero2 = 2, populacao1, populacao2, pontoturistico1, pontoturistico2; 
    float area1, area2, pib1, pib2;
    char codigo1[4], codigo2[4], cidadeNum1[50], cidadeNum2[50];
    char estado1, estado2;

    //Coleta de dados da carta 1
    printf("\n---Digite os dados da carta %d ---\n\n", numero1);


    printf("Estado (A-H):");
    scanf(" %c", &estado1);
 
    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidadeNum1);  


    printf("População:");
    scanf("%d", &populacao1);    

    printf("Área (em km²):");
    scanf("%f", &area1); 

    printf("Pib (em bilhões de reais):");
    scanf("%f", &pib1);   
 
    printf("Número de Pontos Turisticos:");
    scanf("%d", &pontoturistico1);

    //Coleta de dados da carta 2
    printf("\n---Digite os dados da carta %d ---\n\n", numero2);


    printf("Estado (A-H):");
    scanf(" %c", &estado2);
 
    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidadeNum2);  


    printf("População:");
    scanf("%d", &populacao2);    

    printf("Área (em km²):");
    scanf("%f", &area2); 

    printf("Pib (em bilhões de reais):");
    scanf("%f", &pib2);   
 
    printf("Número de Pontos Turisticos:");
    scanf("%d", &pontoturistico2);
    
    //****Nivel aventureiro****
    //densidade populacional = população / área da cidade
    
    //conversao explícita para float carta 1 
    float densidadepopulacional1 = (float) populacao1 / area1;

    //conversao explícita para float carta 2 
    float densidadepopulacional2 = (float) populacao2 / area2;

    
    //PIB per capita = PIB / populacao

    //conversao explícita para float carta 1 
    float PIBpercapita1 = (float) (pib1 *1000000000) / populacao1;

    //conversao explícita para float carta 2 
    float PIBpercapita2 = (float) (pib2 *1000000000) / populacao2;

    double SuperPoder1 = (double) populacao1 + area1 + pib1 + pontoturistico1 + PIBpercapita1  + 1 / densidadepopulacional1;  //mestre
    double SuperPoder2 = (double) populacao2 + area2 + pib2 + pontoturistico2 + PIBpercapita2  + 1 / densidadepopulacional2; //mestre


    printf("\n***Desafio Super Trunfo - Países***\n");

    //Exibir as informações da carta 1
    printf ("\nCarta %d\n", numero1);
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidadeNum1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("Pib: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita1);
    printf ("Super poder 1: %.2lf\n", SuperPoder1); 

    //Exibir as informações da carta 2
    printf ("\nCarta %d\n", numero2);
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidadeNum2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("Pib: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf ("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf ("Super poder 2: %.2lf\n", SuperPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoturistico1 > pontoturistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
 
    return 0;
}
