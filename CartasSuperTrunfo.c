#include <stdio.h>

int main() {
    // Variáveis da primeira carta
   char estado[50] = "Goiás";
    char codigo1[8] = "A01";  
    char nomedacidade1[50] = "Goiânia";
    int populacao1 = 1437237;
    float area1 = 730.00;
    float pib1 = 60.000000000;
    int pontosTuristicos1 = 15;

    // Variáveis da segunda carta
    char estado2[50] = "Amazonas";
    char codigo2[8] = "B02";
    char nomedacidade2[50] = "Manaus";
    int populacao2 = 2303732;
    float area2 = 11.400;
    float pib2 = 45.00;
    int pontosTuristicos2 = 20;

    // Cadastro da primeira carta
        printf(" Carta 1 \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", nomedacidade1);
        printf("População: %d milhões\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.3f bilhões de reais\n", pib1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Cadastro da segunda carta
        printf("\n Carta 2 \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nomedacidade2);
        printf("População: %d milhões\n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: %.3f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosTuristicos2);

   

   

    return 0;
    
}



