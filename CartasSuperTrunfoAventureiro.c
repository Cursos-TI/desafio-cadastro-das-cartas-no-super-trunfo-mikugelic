#include <stdio.h>

int main() {
    char estado[50], codigo[50], cidade[50];
    int populacao;
    float area, pib, densidade, percapita;
    int turistico;

    char estado2[50], codigo2[50], cidade2[50];
    int populacao2;
    float area2, pib2, densidade2, percapita2;
    int turistico2;

    // Cadastro carta 01
    printf("Cadastro da carta 01:\n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico);

    densidade = populacao / area;
    percapita = pib / populacao;

    // Cadastro carta 02
    printf("Cadastro da carta 02:\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // Resultado carta 01
    printf("Resultado carta 01:\n");
    printf("Estado carta 01: %s\n", estado);
    printf("Código carta 01: %s\n", codigo);
    printf("Cidade carta 01: %s\n", cidade);
    printf("Habitantes carta 01: %d\n", populacao);
    printf("Área carta 01: %.1f km²\n", area);
    printf("PIB carta 01: %.2f\n", pib);
    printf("Pontos turísticos carta 01: %d\n", turistico);
    printf("A Densidade Populacional da carta 01 é: %.2f hab/km²\n", densidade);
    printf("O PIB per Capita da carta 01 é: %.2f reais\n", percapita);

    // Resultado carta 02
    printf("Resultado carta 02:\n");
    printf("Estado carta 02: %s\n", estado2);
    printf("Código carta 02: %s\n", codigo2);
    printf("Cidade carta 02: %s\n", cidade2);
    printf("Habitantes carta 02: %d\n", populacao2);
    printf("Área carta 02: %.1f km²\n", area2);
    printf("PIB carta 02: %.2f\n", pib2);
    printf("Pontos turísticos carta 02: %d\n", turistico2);
    printf("A Densidade Populacional da carta 02 é: %.2f hab/km²\n", densidade2);
    printf("O PIB per Capita da carta 02 é: %.2f reais\n", percapita2);

    return 0;
}
