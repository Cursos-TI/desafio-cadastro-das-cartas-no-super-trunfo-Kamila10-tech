#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado[50] = "Goiás";
    char codigo1[8] = "A01";  
    char nomedacidade1[50] = "Goiânia";
    int populacao1 = 1437237;
    float area1 = 73000.00;
    float pib1 = 6050000000;
    int pontosTuristicos1 = 15;
    float densidadepopulacional1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    // Variáveis da segunda carta
    char estado2[50] = "Amazonas";
    char codigo2[8] = "B02";
    char nomedacidade2[50] = "Manaus";
    int populacao2 = 2303732;
    float area2 = 11400.00;
    float pib2 = 4503500000;
    int pontosTuristicos2 = 20;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Cadastro da primeira carta
        printf(" Carta 1 \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", nomedacidade1);
        printf("População: %d milhões\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);
        printf("PIB per capita: %.2f reais\n", pibpercapita1);

    // Cadastro da segunda carta
        printf("\n Carta 2 \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nomedacidade2);
        printf("População: %d milhões\n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: %f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2);
        printf("PIB per capita: %.2f reais\n", pibpercapita2);
   

   

    return 0;
    
}
