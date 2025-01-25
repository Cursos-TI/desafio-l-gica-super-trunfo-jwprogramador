#include <stdio.h>

// Desafio Super Trunfo - Países


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Atributos: população, Àrea, PIB e Numero de pontos turisticos
    // CARTA01
    char cidade1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;
    
   // criando as variaveis do desafio 2 - Densidade populacional e PIB per capita
    float densidade_populacional1;
    float PIB_per_capita1;
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("CARTA01: \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitante da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);

     printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    // Cauculos matematicos segundo desafio
    densidade_populacional1 = populacao1 / area1;

    PIB_per_capita1 = PIB1 / populacao1;

    //soma de todas as propriedades da CARTA01 
    float resultado1;
    resultado1 = populacao1 + pontos_turisticos1 + area1 + PIB1;
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("População: %d \n", populacao1);
    printf("Pontos turisticos: %d \n", pontos_turisticos1);
    printf("Area: %f \n", area1);
    printf("PIB: %f \n", PIB1);
    
    // impressão do PIB per capita e densidade populacional
    printf("Densidade populacional: %f \n", densidade_populacional1);
    printf("PIB per Capita: %f \n", PIB_per_capita1);
    
    //Impressão da soma de todas as propriedades da CARTA01 
    printf("Carta01 volor total: %f \n", resultado1);


//-----------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------
    // CARTA02
    char cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;
    
   // criando as variaveis do desafio 2 - Densidade populacional e PIB per capita
    float densidade_populacional2;
    float PIB_per_capita2;
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("CARTA02: \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitante da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area2);

     printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    // Cauculos matematicos segundo desafio
    densidade_populacional2 = populacao2 / area2;

    PIB_per_capita2 = PIB2 / populacao2;

    //soma de todas as propriedades da CARTA01 
    float resultado2;
    resultado2 = populacao2 + pontos_turisticos2 + area2 + PIB2;
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("População: %d \n", populacao2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", PIB2);
    
    // impressão do PIB per capita e densidade populacional
    printf("Densidade populacional: %f \n", densidade_populacional2);
    printf("PIB per Capita: %f \n", PIB_per_capita2);
    
    //Impressão da soma de todas as propriedades da CARTA01 
    printf("Carta02 volor total: %f \n", resultado2);



//-------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------
    // comparação entre as propriedades 
   printf("Carta vencedora \n");
    if (populacao1 > populacao2)
    {
    printf("População: %d - Vencedor Carta01 - cidade: %s \n", populacao1, cidade1);
    }  else {
    printf("População: %d - Vencedor Carta02 - cidade: %s \n", populacao2, cidade2);
    }
   
    if (pontos_turisticos1 > pontos_turisticos2)
    {
    printf("Ponto turisticos: %d - Vencedor Carta01 - cidade: %s \n", pontos_turisticos1, cidade1);
    }  else {
    printf("Ponto turisticos: %d - Vencedor Carta02 - cidade: %s \n", pontos_turisticos2, cidade2);
    }
   
    if (area1 > area2)
    {
    printf("Area: %f - Vencedor Carta01 - cidade: %s \n", area1, cidade1);
    }  else {
    printf("Area: %f - Vencedor Carta01 - cidade: %s \n", area2, cidade2); 
    }

if (PIB1 > PIB2)
    {
    printf("PIB: %f - Vencedor Carta01 - cidade: %s \n", PIB1, cidade1);
    }  else {
    printf("PIB: %f - Vencedor Carta01 - cidade: %s \n", PIB2, cidade2); 
    }


if (PIB_per_capita1 > PIB_per_capita2)
    {
    printf("PIB Per Capita: %f Vencedor Carta01 - cidade: %s \n", PIB_per_capita1, cidade1);
    }  else {
    printf("PIB Per Capita %f Vencedor Carta01 - cidade: %s \n", PIB_per_capita2, cidade2); 
    }

if (densidade_populacional1 < densidade_populacional2)
    {
    printf("Densidade Populacional: %f Vencedor Carta01 - cidade: %s \n", densidade_populacional1, cidade1);
    }  else {
    printf("Densidade Populacional: %f Vencedor Carta01 - cidade: %s \n", densidade_populacional2, cidade2); 
    }


    return 0;
}
