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
    scanf("%s", cidade1);

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
    scanf("%s", cidade2);

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
    int escolha1;
    int escolha2;
    float comparacao1, comparacao2;

    printf("Comparação das cartas \n");
    printf("Escolha a propriedade da Carta a ser comparada \n");
    printf("1. População\n");
    printf("2. Numero de pontos turisticos\n");
    printf("3. Area \n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    
    // primeira escolha
    printf("Primeira Escolha! \n");
    scanf("%d", &escolha1);  
    
    //Segunda escolha 
    printf("Segunda Escolha! \n");
    scanf("%d", &escolha2);  

  if (escolha1 == escolha2) {
  printf("Segunda Escolha igual a primeira! Escolha outra propriedade \n");
  scanf("%d", &escolha2); 
  }


//Comparação da escolha 1
    switch (escolha1){
    case 1:
      printf("Primeira escolha: População \n");
      comparacao1 = populacao1 > populacao2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break; 
    case 2:
      printf("Primeira escolha: Numero de pontos turisticos \n");
      comparacao1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break; 
    case 3:
      printf("Primeira escolha: Area \n");
      comparacao1 = area1 > area2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break; 
    case 4:
      printf("Primeira escolha: PIB \n");
      comparacao1 = PIB1 > PIB2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break; 
    case 5:
      printf("Primeira escolha: Densidade populacional\n");
      comparacao1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break;
    case 6:
      printf("Primeira escolha: PIB per capita\n");
      comparacao1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
      if (comparacao1 == 1) {
        printf("Vencedor da primeira escolha Carta01\n");
      }else{
        printf("Vencedor da primeira escolha Carta02\n");
      }
      break; 
    default:
    printf("Opção Invalida!\n");
      break; 
    }

// Comparação da escolha 2
  switch (escolha2){
    case 1:
      printf("Segunda escolha: População \n");
      comparacao2 = populacao1 > populacao2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segundaescolha Carta02\n");
      }
      
      break; 
    case 2:
      printf("Segunda escolha: Numero de pontos turisticos \n");
      comparacao2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segunda escolha Carta02\n");
      }
      break; 
    case 3:
      printf("Segunda escolha: Area \n");
      comparacao2 = area1 > area2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segunda escolha Carta02\n");
      }
      break; 
    case 4:
      printf("Segunda escolha: PIB \n");
      comparacao2 = PIB1 > PIB2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segunda escolha Carta02\n");
      }
      break; 
    case 5:
      printf("Segunda escolha: Densidade populacional\n");
      comparacao2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segunda escolha Carta02\n");
      }
      break;
    case 6:
      printf("Segunda escolha: PIB per capita\n");
      comparacao2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
      if (comparacao2 == 1) {
        printf("Vencedor da Segunda escolha Carta01\n");
      }else{
        printf("Vencedor da Segunda escolha Carta02\n");
      }
      break; 
    default:
    printf("Opção Invalida!\n");
      break; 
    }
   

if (comparacao1 == 1 && comparacao2 == 1) {
  printf("Vencedor carta01!\n");
} else if ((comparacao1 == 1 && comparacao2 == 0) || (comparacao1 == 0 && comparacao2 == 1))  {
 printf("Empatou!\n");
} else {
  printf("Vencedor carta02!\n");
}


    return 0;
}
