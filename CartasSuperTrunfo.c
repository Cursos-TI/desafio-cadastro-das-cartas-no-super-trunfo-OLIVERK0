#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

     char estado;
     char codigo_da_Carta[3];
     char nome_da_cidade[50];
     int populacao;
     float area;
     float pib;
     int pontos_turisticos;

     printf("Digite o estado:\n");
     scanf("%s", &estado);

     printf("Digite o código da carta:\n");
     scanf("%s", &codigo_da_Carta);

     printf("Digite o nome da cidade:\n");
     scanf("%s", &nome_da_cidade);

     printf("Digite o numero da população:\n");
     scanf("%d", &populacao);
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
