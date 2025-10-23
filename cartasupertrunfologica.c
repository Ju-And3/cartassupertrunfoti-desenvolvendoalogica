#include <stdio.h>

int main() {
    // Carta 1
    int pontosturisticos1 = 0;
    float PIB1 = 0.0, area1 = 0.0, densidade1 = 0.0, pibpercapita1 = 0.0, superPoder1 = 0.0, inversoDensidade1 = 0.0;
    char nomecidade1[50] = "", codigo1[50] = "", estado1[50] = "";
    unsigned long int populacao1 = 0;

    // Carta 2
    int pontosturisticos2 = 0;
    float PIB2 = 0.0, area2 = 0.0, densidade2 = 0.0, pibpercapita2 = 0.0, superPoder2 = 0.0, inversoDensidade2 = 0.0;
    char nomecidade2[50] = "", codigo2[50] = "", estado2[50] = "";
    unsigned long int populacao2 = 0;

    // --------------------carta 1------------------
    printf("Carta 1 \n");
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Qual o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade1);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = PIB1 / (float)populacao1;
    inversoDensidade1 = 1.0 / densidade1;
    superPoder1 = (populacao1 + area1 + PIB1 + pontosturisticos1 + pibpercapita1 + inversoDensidade1);

    // Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é: %.2f\n", densidade1);

    // Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é: %.2f\n", pibpercapita1);

    // exibição da carta 1
    printf(" Carta 1\n");
    printf("Habitantes: %lu\n", populacao1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB: %.4f bilhoes de reais\n", PIB1);
    printf("Área: %.4f km²\n", area1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // ---------------carta 2-------------
    printf("Carta 2 \n");

    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Qual o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2);

    // Cálculos
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = PIB2 / (float)populacao2;
    inversoDensidade2 = 1.0 / densidade2;
    superPoder2 = (populacao2 + area2 + PIB2 + pontosturisticos2 + pibpercapita2 + inversoDensidade2);

    // Exibição dos resultados dos cálculo da Densidade Populacional
    printf("A Densidade Populacional é: %.2f\n", densidade2);

    // Exibição dos resultados dos cálculos do PIB per Capita
    printf("O PIB per Capital é: %.2f\n", pibpercapita2);

    // Exibição da carta 2
    printf("\n Carta 2 \n");
    printf("Habitantes: %lu\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB: %.4f bilhões de reais\n", PIB2);
    printf("Área: %.4f km²\n", area2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // ---- Comparação de um atributo escolhido ----
    char atributo_escolhido[50] = "População"; 

    int vencedor;  // 1 para carta1, 2 para carta2
    float valor1, valor2;  // Valores para exibição

    // Lógica de comparação baseada no atributo escolhido
    if (strcmp(atributo_escolhido, "População") == 0) {
        valor1 = (float)populacao1;
        valor2 = (float)populacao2;
        if (populacao1 > populacao2) {
            vencedor = 1;
        } else {
            vencedor = 2;
        }
    } else if (strcmp(atributo_escolhido, "Área") == 0) {
        valor1 = area1;
        valor2 = area2;
        if (area1 > area2) {
            vencedor = 1;
        } else {
            vencedor = 2;
        }
    } else if (strcmp(atributo_escolhido, "PIB") == 0) {
        valor1 = PIB1;
        valor2 = PIB2;
        if (PIB1 > PIB2) {
            vencedor = 1;
        } else {
            vencedor = 2;
        }
    } else if (strcmp(atributo_escolhido, "Densidade Populacional") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
        // Para Densidade Populacional, menor valor vence
        if (densidade1 < densidade2) {
            vencedor = 1;
        } else {
            vencedor = 2;
        }
    } else if (strcmp(atributo_escolhido, "PIB per capita") == 0) {
        valor1 = pibpercapita1;
        valor2 = pibpercapita2;
        if (pibpercapita1 > pibpercapita2) {
            vencedor = 1;
        } else {
            vencedor = 2;
        }
    }

    // Exibindo o resultado da comparação de forma clara
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %.0f\n", nomecidade1, estado1, valor1);  // Usando %.0f para inteiros, mas float para consistência
    printf("Carta 2 - %s (%s): %.0f\n", nomecidade2, estado2, valor2);
    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }

    return 0;
}
