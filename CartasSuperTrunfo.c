#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Declaração das variáveis.
    int populacao, pontosturisticos;
    float area, pib;
    char estado;
    char codigocarta[20];
    char cidade[20];

    //Instruções para a inserção de dados no cadastro.
    printf("Os Estados são identificados pelas letras de A a H. \n");
    printf("Cada Estado tem quatro Cidades, numeradas de 01 a 04. \n");
    printf("A combinação da letra do Estado e número da Cidade define o código da carta. \n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro das propriedades das Cartas.
    //Estado
    printf("Digite um Estado (letra de A a H): \n");
    scanf("%c", &estado);
    //Código da carta
    printf("Digite o Código da Carta (por exemplo, A01, A02, B01, B02, etc.): \n");
    scanf("%s", &codigocarta);
    //Nome da cidade
    printf("Digite o Nome da Cidade: \n");
    //scanf("%s", &cidade);
    scanf("%s", &cidade);
    //População
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    //Área
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area);
    //PIB
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib);
    //Número de pontos turísticos
    printf("Digite o número de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontosturisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição das propriedades da carta
    printf("Sua carta foi cadastrada com sucesso! \n");
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigocarta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d Habitantes \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos da Cidade: %d \n", pontosturisticos);

    return 0;
}
