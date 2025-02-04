#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char pais[25];
    char estado[25];
    char cidade[25];
    char cod[4];
         int populacao;
         int turistico;
             float area;
             float pib;

    printf("insira o país:\n");
    scanf(" %[^\n]", &pais);

          printf("Insira o Estado:\n");
          scanf(" %[^\n]", &estado);

                printf("Insira a cidade:\n");
                scanf(" %[^\n]", &cidade);

                      printf("Código da carta:\n");
                      scanf(" %s", &cod);
         
    printf("Insira a população:\n");
    scanf(" %d", &populacao);

          printf("Insira a Área da cidade em km²:\n");
          scanf(" %f", &area);

                printf("Insira o PIB da cidade em milhões:\n");
                scanf(" %f", &pib);

                      printf("Insira quantos pontos turísticos possui a cidade:\n");
                      scanf(" %d", &turistico);

    printf("País: %s \n", pais);

          printf("Estado: %s \n", estado);

                printf("Cidade: %s \n", cidade);

                      printf("Código: %s \n", cod);

    printf("População: %d \n", populacao);

          printf("Área: %3.f km² \n", area);

                printf("PIB: %3.f milhões \n", pib);

                      printf("Pontos Turísticos: %d \n", turistico);

    return 0;
}
