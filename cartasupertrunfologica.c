#include <stdio.h>
#include <string.h>

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

    // ----carta 1------
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

    // ------carta 2------
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

    // -------------------- Menu Interativo para Escolha do Atributo --------------------
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    char atributo_escolhido[50];
    int vencedor = 0;  // 0 = empate, 1 = carta1, 2 = carta2
    float valor1, valor2;

    // Usando switch para determinar o atributo e realizar a comparação
    switch (opcao) {
        case 1:
            strcpy(atributo_escolhido, "População");
            valor1 = (float)populacao1;
            valor2 = (float)populacao2;
            if (populacao1 > populacao2) {
                vencedor = 1;
            } else if (populacao1 < populacao2) {
                vencedor = 2;
            } else {
                vencedor = 0;  // Empate
            }
            break;
        case 2:
            strcpy(atributo_escolhido, "Área");
            valor1 = area1;
            valor2 = area2;
            if (area1 > area2) {
                vencedor = 1;
            } else if (area1 < area2) {
                vencedor = 2;
            } else {
                vencedor = 0;
            }
            break;
        case 3:
            strcpy(atributo_escolhido, "PIB");
            valor1 = PIB1;
            valor2 = PIB2;
            if (PIB1 > PIB2) {
                vencedor = 1;
            } else if (PIB1 < PIB2) {
                vencedor = 2;
            } else {
                vencedor = 0;
            }
            break;
        case 4:
            strcpy(atributo_escolhido, "Número de pontos turísticos");
            valor1 = (float)pontosturisticos1;
            valor2 = (float)pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2) {
                vencedor = 1;
            } else if (pontosturisticos1 < pontosturisticos2) {
                vencedor = 2;
            } else {
                vencedor = 0;
            }
            break;
        case 5:
            strcpy(atributo_escolhido, "Densidade demográfica");
            valor1 = densidade1;
            valor2 = densidade2;
            // Para Densidade Demográfica, menor valor vence
            if (densidade1 < densidade2) {
                vencedor = 1;
            } else if (densidade1 > densidade2) {
                vencedor = 2;
            } else {
                vencedor = 0;
            }
            break;
        default:
            printf("Opção inválida! Saindo do programa.\n");
            return 1;  // Encerra o programa se a opção for inválida
    }

    // -------------------- Exibição do Resultado --------------------
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s: %.2f\n", nomecidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2, valor2);
    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (vencedor == 2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
