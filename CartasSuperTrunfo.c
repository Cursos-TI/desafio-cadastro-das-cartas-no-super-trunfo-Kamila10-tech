#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char codigo1[8];  
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char codigo2[8];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Informe o código da cidade (ex: A01): ");
    scanf("%3s", codigo1); 
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área em km²: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Segunda Carta:\n");
    printf("Informe o código da cidade (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área em km²: ");
    scanf("%f", &area2);
    printf("Informe o PIB : ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados 
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
    
}
