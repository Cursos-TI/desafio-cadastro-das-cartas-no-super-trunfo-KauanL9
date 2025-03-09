#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main(){
    char estado1[3], cidade1[50], codigo1[10];                 //Definição das variáveis para ambas as cartas.
    char estado2[3], cidade2[50], codigo2[10];
    int populacao1, turisticos1, populacao2, turisticos2;
    float area1, pib1, area2, pib2;

    printf("Digite os dados da carta 1: \n"); // Início da entrada de dados da carta 1.

    printf("Digite o estado (sigla): \n");
    scanf("%1s", estado1); // Lê até 1 caracteres para a sigla do estado

    printf("Digite o codigo do estado: \n");
    scanf("%3s", codigo1); // Lê até 3 caracteres para o código do estado

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1); // Lê uma linha inteira, incluindo espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n"); // Fim da entrada de dados da carta 1.
    scanf("%d", &turisticos1);

    printf("Digite os dados da carta 2: \n"); // Início da entrada de dados da carta 2.

    printf("Digite o estado (sigla): \n");
    scanf("%1s", estado2); // Lê até 1 caracteres para a sigla do estado

    printf("Digite o código do estado: \n");
    scanf("%3s", codigo2); // Lê até 3 caracteres para o código do estado

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2); // Lê uma linha inteira, incluindo espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n"); // Fim da entrada de dados da carta 2.
    scanf("%d", &turisticos2);

    printf("\nCarta 1:\n"); // Informações da carta 1.
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1); // Fim das informações da carta 1.

    printf("\nCarta 2:\n"); // Informações da carta 2.
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2); //Fim das informações da carta 2.

    return 0;
}

