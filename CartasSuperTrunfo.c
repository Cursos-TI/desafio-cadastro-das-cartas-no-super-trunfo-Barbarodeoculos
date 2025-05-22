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

      char estado[25], estado2[25];
      char cod[4], cod2[4];
      char cidade[25], cidade2[25];
      int populacao, populacao2;
      int turistico, turistico2;
      float area, area2;
      float pib, pib2;
      // carta 1
            printf("Código da carta 1:\n");
            scanf(" %s", &cod);

            printf("insira o Estado da carta 1:\n");
            scanf(" %s", &estado);
                        
            printf("Insira a cidade da carta 1:\n");
            scanf(" %s", &cidade);
         
            printf("Insira a população da carta 1:\n");
            scanf(" %d", &populacao);

            printf("Insira a Área da cidade da carta 1:\n");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade da carta 1:\n");
            scanf(" %f", &pib);

            printf("Insira quantos pontos turísticos possui a cidade da carta 1:\n");
            scanf(" %d", &turistico);
      
                        //Carta 2
                        printf("Código da carta 2: \n");
                        scanf(" %s", &cod2);

                        printf("Insira o Estado da carta 2: \n");
                        scanf(" %s", &estado2);
      
                        printf("Insira a Cidade da carta 2: \n");
                        scanf(" %s", &cidade2);

                        printf("Insira a população da cidade da carta 2: \n");
                        scanf(" %d", &populacao2);

                        printf("Insira a area da cidade da carta 2: \n");
                        scanf(" %f", &area2);

                        printf("Insira o PIB da cidade da carta 2: \n");
                        scanf(" %f", &pib2);
 
                        printf("Insira quantidade de pontos turísticos da carta 2: \n");
                        scanf(" %d", &turistico2);
                        printf("\n");
                        
      //carta 1
      printf("Carta 1 \n");
      printf("Código: %s \n", cod);
      printf("Estado: %s \n", estado);
      printf("Cidade: %s \n", cidade);
      printf("População: %d \n", populacao);
      printf("Área: %.2f km² \n", area);
      printf("PIB: %.2f Bilhões de reais \n", pib);
      printf("Número de pontos Turísticos: %d \n\n", turistico);

            //carta 2
            printf("Carta 2 \n");
            printf("Código: %s \n", cod2);
            printf("Estado: %s \n", estado2);
            printf("Cidade: %s \n", cidade2);
            printf("População: %d \n", populacao2);
            printf("Área: %.2f Km² \n", area2);
            printf("PIB: %.2f Bilhões de reais \n", pib2);
            printf("Número de pontos Turísticos: %d \n\n", turistico2);
                         
      return 0;
}
