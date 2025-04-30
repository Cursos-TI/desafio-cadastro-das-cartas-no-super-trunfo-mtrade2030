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

    printf("\nDesafio Super Trunfo - Países\n");

    //Exibir as informações da carta 1
    printf ("\nCarta %d\n", numero1);
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidadeNum1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("Pib: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico1);

    //Exibir as informações da carta 2
    printf ("\nCarta %d\n", numero2);
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidadeNum2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("Pib: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d \n", pontoturistico2);



 
    return 0;
}
