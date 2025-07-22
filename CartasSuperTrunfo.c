#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

//variaveis carta1

     char estado1;
     char codigo1[4];
     char nome_cidade1[51];
     int populacao1;
     float area1;
     float pib1;
     int pontos_turisticos1;

     //variaveis carta2

     char estado2;
     char codigo2[4];
     char nome_cidade2[51];
     int populacao2;
     float area2;
     float pib2;
     int pontos_turisticos2;

     //entrada de dados da carta 1
     printf("Cadastro da carta 1:\n");
     printf("Informe o Estado [A-H]:");
     scanf(" %c", &estado1);
     printf("Informe o código da Carta (ex:A01):");
     scanf(" %3s", &codigo1);
     printf("Informe o nome da cidade:");
     scanf(" %[^\n]", &nome_cidade1);
     printf("Informe a População:");
     scanf("%i", &populacao1);
     printf("Informe a Área em KM²:");
     scanf("%f", &area1);
     printf("Informe o PIB em Bilhões de Reais:");
     scanf("%f", &pib1);
     printf("Número de Ponto Turístico:");
     scanf("%d", &pontos_turisticos1);

     printf("\n");

     //Entrada de dados da Carta 2

     printf("Cadastro da carta 2:\n");
     printf("Informe o Estado [A-H]:");
     scanf(" %c", &estado2);
     printf("Informe o código da Carta (ex:A02):");
     scanf(" %3s", &codigo2);
     printf("Informe o nome da cidade:");
     scanf(" %[^\n]", &nome_cidade2);
     printf("Informe a População:");
     scanf("%i", &populacao2);
     printf("Informe a Área em KM²:");
     scanf("%f", &area2);
     printf("Informe o PIB em Bilhões de Reais:");
     scanf("%f", &pib2);
     printf("Número de Ponto Turístico:");
     scanf("%d", &pontos_turisticos2);

     printf("\n");

     //Exibição dos dados da carta 1

     printf("Carta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código da Carta: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nome_cidade1);
     printf("População: %i\n", populacao1);
     printf("Área: %.2f KM²\n", area1);
     printf("PIB: %.2f Bilhões\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

     printf("\n;");

     //Exibição de dados da Carta 2

     printf("Carta 2: \n");
     printf("Estado: %c\n", estado2);
     printf("Código da Carta: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome_cidade2);
     printf("População: %i\n", populacao2);
     printf("Área: %.2f KM²\n", area2);
     printf("PIB: %.2f Bilhões\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

     
     




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
