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

    char pais[20];
    char estado[20];
    char cidade[20];
    char cod[20];
    int populacao;
    int turistico;
    float area;
    double pib;



    printf("insira o país:\n");
    scanf(" %s", &pais);

    printf("Insira o Estado:\n");
    scanf(" %s", &estado);

    printf("Insira a cidade:\n");
    scanf(" %s", &cidade);

    printf("Código da carta:\n");
    scanf(" %s", &cod);
         
    printf("Insira a população:\n");
    scanf(" %d", &populacao);

    printf("Insira a Área da cidade:\n");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade:\n");
    scanf(" %e", &pib);

    printf("Insira quantos pontos turísticos possui a cidade:\n");
    scanf(" %d", &turistico);
    
// corrigir area e pib

    printf("País: %s \n", pais);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Código: %s \n", cod);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %.2e \n", pib);
    printf("Pontos Turísticos: %d \n", turistico);

    return 0;
}
