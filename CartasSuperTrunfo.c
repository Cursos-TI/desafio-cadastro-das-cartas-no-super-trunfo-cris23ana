#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*
DESAFIO INICIANTE: Criar um jogo de Super Trunfo com o tema Países. Cada País será dividido em oito Estados, identificados pelas
letras A-H, e cada Estado terá quatro Cidades, numeradas de 01-04. O usuário deverá fornecer as informações necessárias
para cadastrar as cartas das cidades, e cada propriedade deverá ser apresentada de forma clara.

DESAFIO INTERMEDIÁRIO: Mesma mecânica do nível iniciante, mas agora o cálculo da densidade populacional (população dividida por
área da cidade) e do PIB per capita (PIB dividido pela população) serão calculados. 

DESAFIO AVANÇADO: Mesma mecânica dos níveis anteriores, mas agora conta com a comparação entre propriedades das cartas e o super
poder que é a soma de todas as propriedades das cartas, tomando cuidado com a conversão delas. 
*/

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Declaração das variáveis
    //primeira carta
    int populacao, pontosturisticos;
    char estado;
    char codigocarta[20];
    char cidade[20];
    float area, densidadepop, pib, pibpercapita;
    //segunda carta
    int populacao2, pontosturisticos2;
    char estado2;
    char codigocarta2[20];
    char cidade2[20];
    float area2, densidadepop2, pib2, pibpercapita2;
    //super poder
    float superpoder1, superpoder2;

    //Instruções para a inserção de dados no cadastro
    printf("\n");
    printf("---------* CADASTRO DAS DUAS CARTAS *---------\n");
    printf("\n");
    printf("OBSERVAÇÕES:\n");
    printf("Os Estados são identificados pelas letras A-H. \n");
    printf("As Cidades são numeradas de 01-04. \n");
    printf("A combinação da letra do Estado e número da Cidade define o código da carta. \n");
    printf("\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro das propriedades
    //Estado
    printf("Digite o Estado da primeira Carta: \n");
    scanf(" %c", &estado);
    printf("Digite o Estado da segunda Carta: \n");
    scanf(" %c", &estado2);
    //Código da carta
    printf("Digite o Código da primeira Carta: \n");
    scanf(" %s", codigocarta);
    printf("Digite o Código da segunda Carta: \n");
    scanf(" %s", codigocarta2);
    //Nome da cidade
    printf("Digite o Nome da primeira Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Digite o Nome da segunda Cidade: \n");
    scanf(" %[^\n]", cidade2);
    //População
    printf("Digite a População da primeira Cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a População da segunda Cidade: \n");
    scanf("%d", &populacao2);
    //Área
    printf("Digite a Área da primeira Cidade (em km²): \n");
    scanf("%f", &area);
    printf("Digite a Área da segunda Cidade (em km²): \n");
    scanf("%f", &area2);
    //PIB
    printf("Digite o PIB da primeira Cidade: \n");
    scanf("%f", &pib);
    printf("Digite o PIB da segunda Cidade: \n");
    scanf("%f", &pib2);
    //Número de pontos turísticos
    printf("Digite o número de Pontos Turísticos da primeira Cidade: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite o número de Pontos Turísticos da segunda Cidade: \n");
    scanf("%d", &pontosturisticos2);

    //Cálculo da densidade populacional (população / área)
    densidadepop = (float) populacao / area;
    densidadepop2 = (float) populacao2 / area2;
    //Cálculo do PIB per capita (pib / população)
    pibpercapita = pib / (float) populacao;
    pibpercapita2 = pib2 / (float) populacao2;

    //Cálculo do super poder (soma de todos os atributos)
    superpoder1 = (float) populacao + (float) pontosturisticos + area + densidadepop + pib + pibpercapita;
    superpoder2 = (float) populacao2 + (float) pontosturisticos2 + area2 + densidadepop2 + pib2 + pibpercapita2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição das propriedades da carta e cálculo das comparações
    printf("\n");
    printf("---------* Suas cartas foram cadastradas com sucesso! *--------- \n");
    printf("\n");
    printf("Estado da primeira Carta: %c - Estado da segunda Carta: %c \n", estado, estado2);
    printf("Código da primeira Carta: %s - Código da segunda Carta: %s \n", codigocarta, codigocarta2);
    printf("Nome da primeira Cidade: %s - Nome da segunda Cidade: %s \n", cidade, cidade2);
    printf("População da primeira Cidade: %d Habitantes - População da segunda Cidade: %d Habitantes \n", populacao, populacao2);
    printf("Área da primeira Cidade: %.2f km² - Área da segunda Cidade: %.2f km² \n", area, area2);
    printf("Densidade Populacional da primeira Cidade: %.2f habitantes/km² - Densidade Populacional da segunda Cidade: %.2f habitantes/km² \n", densidadepop, densidadepop2);
    printf("PIB da primeira Cidade: %.2f bilhões de reais - PIB da segunda Cidade: %.2f bilhões de reais \n", pib, pib2);
    printf("PIB per Capita da primeira Cidade: %.2f reais - PIB per Capita da segunda Cidade: %.2f reais \n", pibpercapita, pibpercapita2);
    printf("Número de Pontos Turísticos da primeira Cidade: %d - Número de Pontos Turísticos da segunda Cidade: %d \n", pontosturisticos, pontosturisticos2);
    printf("\n");
    printf("Super-Poder: Cada carta terá um super poder que é a soma de todas as propriedades.\n");
    printf("Super-Poder! da primeira Carta: %.4f - Super-Poder! da segunda Carta: %.4f \n", superpoder1, superpoder2);
    printf("\n");
    printf("---------* COMPARAÇÃO DAS DUAS CARTAS *---------\n");
    printf("\n");
    printf("OBSERVAÇÕES:\n");
    printf("A propriedade de densidade populacional será considerada vencedora quando tiver o menor valor.\n");
    printf("As outras propriedades vencerão quando tiverem o maior valor. \n");
    printf("A saída da comparação será 1 ou 0, caso a relação seja verdadeira ou falsa.\n");
    printf("Se o resultado da comparação for 1, a carta 1 ganhou; se o resultado for 0, a carta 2 ganhou.\n");
    printf("\n");
    printf("A População da primeira Cidade é maior do que a da segunda Cidade?: %d \n", populacao > populacao2);
    printf("A Área da primeira Cidade é maior do que a da segunda Cidade?: %d \n", area > area2);
    printf("A Densidade Populacional da primeira Cidade é menor do que a da segunda Cidade?: %d \n", densidadepop < densidadepop2);
    printf("O PIB da primeira Cidade é maior do que o da segunda Cidade?: %d \n", pib > pib2);
    printf("O PIB per Capita da primeira Cidade é maior do que o da segunda Cidade?: %d \n", pibpercapita > pibpercapita2);
    printf("Os números de Pontos Turísticos da primeira Cidade são maiores do que os da segunda Cidade?: %d \n", pontosturisticos > pontosturisticos2);
    printf("O Super-Poder! da primeira Cidade é maior do que o da segunda Cidade?: %d \n", superpoder1 > superpoder2);

    return 0;
}
