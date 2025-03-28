#include <stdio.h>

int main() {
    /*
     * ------------------------------------------------------
     * 1) Definição dos dados das DUAS cartas 
     * ------------------------------------------------------
     */

    // Carta 1
    char estado1[] = "SP";
    char codigo1[] = "B03";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0f;
    float pib1 = 700000.0f;
    int pontosTuristicos1 = 80;

    // Carta 2
    char estado2[] = "CE";
    char codigo2[] = "A01";
    char nomeCidade2[] = "Fortaleza";
    int populacao2 = 2429000;
    float area2 = 313.0f;
    float pib2 = 30000.0f;
    int pontosTuristicos2 = 50;

    /*
     * ------------------------------------------------------
     * 2) Cálculo de Densidade Populacional e PIB per capita
     * ------------------------------------------------------
     */
    float densidade1 = (float)populacao1 / area1; 
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    /*
     * ------------------------------------------------------
     * 3) Exibição dos dados das cartas 
     * ------------------------------------------------------
     */
    printf("=== Cartas do Super Trunfo (Pre-definidas) ===\n\n");

    // Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pibPerCapita1);

    // Carta 2
    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pibPerCapita2);

    /*
     * ------------------------------------------------------
     * 4) Escolha do atributo para comparação
     *    Neste exemplo: População (maior vence)
     * ------------------------------------------------------
     */

    printf("=== Comparacao de Cartas (Atributo: Populacao) ===\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

    /*
     * ------------------------------------------------------
     * 5) Lógica de comparação usando if/else
     *    (Populacao -> maior valor vence)
     * ------------------------------------------------------
     */

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } 
    else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
