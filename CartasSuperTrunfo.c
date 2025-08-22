#include <stdio.h>

int main() {
    // Definicao das variaveis para a Carta 1
    char estado1;
    char codigo_carta1[5]; // Ex: A01 (4 caracteres + 1 para o terminador nulo \0)
    char nome_cidade1[50]; // Ex: Sao Paulo (ate 49 caracteres + \0)
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // --- LEITURA DOS DADOS DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // O espaco antes do %c ignora espacos ou novas linhas pendentes
    
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o Nome da Cidade (use underline para espacos, ex: Rio_de_Janeiro): ");
    scanf("%s", nome_cidade1);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n"); // Adiciona uma linha em branco para melhor visualizacao

    // Definicao das variaveis para a Carta 2
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // --- LEITURA DOS DADOS DA CARTA 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf("%s", codigo_carta2);

    printf("Digite o Nome da Cidade (use underline para espacos, ex: Rio_de_Janeiro): ");
    scanf("%s", nome_cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // --- EXIBICAO DOS DADOS DAS CARTAS ---
    printf("--- Cartas Cadastradas ---\n");
    
    // Exibicao da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // %.2f para formatar com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\n"); // Linha em branco para separar as cartas
    
    // Exibicao da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
