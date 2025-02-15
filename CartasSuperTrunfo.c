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


    // Declaração de variaveis;
    // "Char" para um unico caractere, acrescentando "[n°]" para caracteres em cadeia(string);
    // "int" para números inteiros;
    // "float" para números de ponto flutuante que envolvam casas decimais;

      // importante não usar acentos e nem "ç" para variaveis;
      char pais[25];
      char estado[25];
      char cidade[25];
      char cod[4];
      int populacao;
      int turistico;
      float area;
      float pib;

            //Especificadores de formato;
            // (%d) para caracteres inteiros;
            // (%s) para caracteres em cadeia;
            // (%f) para caracteres de ponto flutuante, acrescentando (.)+(nº), define casa decimais a serem exibidas;
            // ha outros especificadores de formato, mas como não os usarei, pelo menos por enquanto, não os descreverei;

                  //"printf" para imprimir;
                  //"scanf" para ler a impressão;
                  printf("insira o país:\n");
                  scanf(" %[^\n]", &pais);
                  //"[^\n]" Foi a solução que encontrei para resolver o problema de espaçamento da string;
                  //"[^\n]" permite a cadeia string até que o usuario pule de linha; 

                        printf("Insira o Estado:\n");
                        scanf(" %[^\n]", &estado);
                        //"&" antes da variavel, para possibilitar a interação com o usuario na informação específica;
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
                        
                        //Importante inserir variaveis que envolvão calculo antes da impressão, para não causar erro;
                        float densidade = populacao/area;
                        float capita = pib/populacao;
                        
                  printf("Densidade Populacional: %.2f \n", densidade);

            printf("Pib per capita: %.2f \n", capita);

      return 0;
}
