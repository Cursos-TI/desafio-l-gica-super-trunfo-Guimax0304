#include <stdio.h>

/*
 * Super Trunfo – Comparações Profissionais
 * Lê dois conjuntos de atributos de cidades e compara:
 *  População, Área, PIB, Pontos Turísticos,
 *  Densidade (menor vence), PIB per Capita e Super Poder.
 * Exibe o resultado numa tabela ASCII alinhada.
 */

// Função para calcular o inverso da densidade (1/densidade)
static float inversoDensidade(float densidade) {
    return (densidade > 0.0f) ? 1.0f / densidade : 0.0f;
}

// Imprime uma linha da tabela: atributo e vencedor (Carta 1, Carta 2 ou Empate)
static void imprimeLinha(const char *rotulo, int resultado) {
    const char *s;
    if (resultado == 1)       s = "Carta 1";
    else if (resultado == 0)  s = "Carta 2";
    else                      s = "Empate";
    printf("| %-20s | %-23s |\n", rotulo, s);
}

int main() {
    unsigned long pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;
    
// --- Cadastro Carta 1 ---
printf("\n=== Cadastro da Carta 1 ===\n");
printf("População (hab): ");
if (scanf("%lu", &pop1) != 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("Área (km²):      ");
if (scanf("%f",  &area1)!= 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("PIB (R$):        ");
if (scanf("%f",  &pib1) != 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("Pontos Turísticos: ");
if (scanf("%d",  &pt1)  != 1) return fprintf(stderr,"Entrada inválida\n"), 1;

// --- Cadastro Carta 2 ---
printf("\n=== Cadastro da Carta 2 ===\n");
printf("População (hab): ");
if (scanf("%lu", &pop2) != 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("Área (km²):      ");
if (scanf("%f",  &area2)!= 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("PIB (R$):        ");
if (scanf("%f",  &pib2) != 1) return fprintf(stderr,"Entrada inválida\n"), 1;
printf("Pontos Turísticos: ");
if (scanf("%d",  &pt2)  != 1) return fprintf(stderr,"Entrada inválida\n"), 1;


    // 2) Cálculos
    float dp1 = pop1 / area1;
    float dp2 = pop2 / area2;
    float pc1 = pib1 / pop1;
    float pc2 = pib2 / pop2;
    float sp1 = (float)pop1 + area1 + pib1 + pt1 + pc1 + inversoDensidade(dp1);
    float sp2 = (float)pop2 + area2 + pib2 + pt2 + pc2 + inversoDensidade(dp2);

    // 3) Impressão da tabela
    printf("\n+------------------------------------------------+\n");
    printf("|           Super Trunfo – Comparações           |\n");
    printf("+----------------------+-------------------------+\n");
    printf("| Atributo             | Vencedor               |\n");
    printf("+----------------------+-------------------------+\n");

    imprimeLinha("População",        (pop1  > pop2)  ? 1 : (pop2 > pop1 ? 0 : 2));
    imprimeLinha("Área",             (area1 > area2) ? 1 : (area2 > area1 ? 0 : 2));
    imprimeLinha("PIB",              (pib1  > pib2)  ? 1 : (pib2 > pib1 ? 0 : 2));
    imprimeLinha("Pontos Turísticos",(pt1   > pt2)   ? 1 : (pt2  > pt1  ? 0 : 2));
    imprimeLinha("Densidade",        (dp1   < dp2)   ? 1 : (dp2  < dp1  ? 0 : 2)); // menor vence
    imprimeLinha("PIB per Capita",   (pc1   > pc2)   ? 1 : (pc2  > pc1  ? 0 : 2));
    imprimeLinha("Super Poder",      (sp1   > sp2)   ? 1 : (sp2  > sp1  ? 0 : 2));

    printf("+----------------------+-------------------------+\n");
    return 0;
}
