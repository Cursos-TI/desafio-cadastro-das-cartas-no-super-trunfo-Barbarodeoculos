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
      char pais[25], pais2[25];
      char estado[25], estado2[25];
      char cidade[25], cidade2[25];
      char cod[4], cod2[4];
      int populacao, populacao2;
      int turistico, turistico2;
      float area, area2;
      float pib, pib2;

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

                  printf("Insira o PIB da cidade:\n");
                  scanf(" %f", &pib);

            printf("Insira quantos pontos turísticos possui a cidade:\n");
            scanf(" %d", &turistico);

      printf("País: %s \n", pais);

      printf("Estado: %s \n", estado);

            printf("Cidade: %s \n", cidade);

                  printf("Código: %s \n", cod);

                        printf("População: %d \n", populacao);

                              printf("Área: %3.f km² \n", area);

                                    printf("PIB: %3.f \n", pib);

                              printf("Pontos Turísticos: %d \n", turistico);
                        
                        //Importante inserir variaveis que envolvão calculo antes da impressão, para não causar erro;
                        float densidade = populacao/area;
                        float capita = pib/populacao;
                        
                  printf("Densidade Populacional: %.2f \n", densidade);

            printf("Pib per capita: %.2f \n", capita);
      
      float super = populacao+area+pib+capita;
      
      printf("Super Poder: %.2f \n", super);


      printf("insira o país:\n");
      scanf(" %[^\n]", &pais2);
                  

            printf("Insira o Estado:\n");
            scanf(" %[^\n]", &estado2);
                        
                  printf("Insira a cidade:\n");
                  scanf(" %[^\n]", &cidade2);

                        printf("Código da carta:\n");
                        scanf(" %s", &cod2);
         
                              printf("Insira a população:\n");
                              scanf(" %d", &populacao2);

                                    printf("Insira a Área da cidade em km²:\n");
                                    scanf(" %f", &area2);

                              printf("Insira o PIB da cidade:\n");
                              scanf(" %f", &pib2);

                        printf("Insira quantos pontos turísticos possui a cidade:\n");
                        scanf(" %d", &turistico2);

                  printf("País: %s \n", pais2);

            printf("Estado: %s \n", estado2);

      printf("Cidade: %s \n", cidade2);

            printf("Código: %s \n", cod2);

                  printf("População: %d \n", populacao2);

                        printf("Área: %3.f km² \n", area2);

                              printf("PIB: %3.f \n", pib2);

                                    printf("Pontos Turísticos: %d \n", turistico2);
                        
                              float densidade2 = populacao2/area2;
                              float capita2 = pib2/populacao2;
                        
                        printf("Densidade Populacional: %.2f \n", densidade2);

                  printf("Pib per capita: %.2f \n", capita2);
      
            float super2 = populacao2+area2+pib2+capita2;
      
      printf("Super Poder: %.2f \n", super2);

      printf("Resultado de carta 1 x Carta 2\n");

      //Se a carta 1 for a vencedora o resultado será (1);
      //Se a carta 2 for a vencedora o resultado será (0);
      printf("População - Vencedor: %d\n", populacao > populacao2);
      printf("Área - Vencedor: %d\n", area > area2 );
      printf("Pib - Vencedor: %d\n", pib > pib2 );
      printf("Ponto Turístico - Vencedor: %d\n", turistico > turistico2);
      printf("Densidade Populacional - Vencedor: %d\n", densidade < densidade2);
      printf("PIB per Capita - Vencedor: %d\n", capita > capita2);
      printf("Super Poder - Vencedor: %d\n", super > super2);
      



      return 0;
}
