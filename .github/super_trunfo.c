#include <stdio.h>

int main(){

    // Declarando as variáveis para a primeira carta

    char estado;
    char codigo[5];
    char nome_da_cidade[40];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos;


    // Declarando as variáveis para a segunda carta

    char estado2;
    char codigo2[5];
    char nome_da_cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos2; 

    // Colocando as informações da primeira carta

    printf("Carta 1: \n");

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numero_de_pontos);

    // Colocando as informações da segunda carta

    printf("Carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numero_de_pontos2);

    // Lendo as informações da primeira carta

    printf("Informações da Carta 1: \n");

    printf("Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);

    printf("Nome da cidade: %s\n", nome_da_cidade);

    printf("População: %d\n", populacao);

    printf("Área em km²: %.2f\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Numero de pontos turísticos: %d\n", numero_de_pontos);

    // Lendo as informações da segunda carta

    printf("Informações da Carta 2: \n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da cidade: %s\n", nome_da_cidade2);

    printf("População: %d\n", populacao2);

    printf("Área em km²: %.2f\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Numero de pontos turísticos: %d", numero_de_pontos2);

    return 0;

    







































}