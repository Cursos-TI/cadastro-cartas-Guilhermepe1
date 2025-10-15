#include <stdio.h>

int main (){

    //Declaração de variáveis da Carta 01
    char estadoC01;
    char codigoC01[4];
    char nomeCidadeC01[50];
    int populacaoC01;
    float areaC01;
    float pibC01;
    int pontosTuristicosC01;
    float densidadePopulacionalC01;
    float pibPerCapitaC01;

    //Declaração de variáveis da Carta 02
    char estadoC02;
    char codigoC02[4];
    char nomeCidadeC02[50];
    int populacaoC02;
    float areaC02;
    float pibC02;
    int pontosTuristicosC02;
    float densidadePopulacionalC02;
    float pibPerCapitaC02;

    //Entrada de dados da Carta 01
    printf("--------| Cadastro da Carta 01 |--------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estadoC01);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigoC01);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeC01);

    printf("Digite a População: ");
    scanf("%d", &populacaoC01);

    printf("Digite a Área (em km²): ");
    scanf("%f", &areaC01);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibC01);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosC01);

    // Cálculos da Carta 01
    densidadePopulacionalC01 = (float)populacaoC01 / areaC01;
    pibPerCapitaC01 = (float)(pibC01 * 1000000000) / populacaoC01;
    
    //Entrada de dados da Carta 02
    printf("--------| Cadastro da Carta 02 |--------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estadoC02);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigoC02);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidadeC02);

    printf("Digite a População: ");
    scanf("%d", &populacaoC02);

    printf("Digite a Área (em km²): ");
    scanf("%f", &areaC02);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pibC02);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosC02);

    // Cálculos da Carta 02
    densidadePopulacionalC02 = (float)populacaoC02 / areaC02;
    pibPerCapitaC02 = (float)(pibC02 * 1000000000) / populacaoC02;

    //  Saída de dados - exibição das cartas cadastradas
    printf("\n\n========| Carta 01 |========\n");
    printf("Estado: %c\n", estadoC01);
    printf("Código: %s\n", codigoC01);
    printf("Nome da Cidade: %s\n", nomeCidadeC01);
    printf("População: %d habitantes\n", populacaoC01);
    printf("Área: %.2f km²\n", areaC01);
    printf("PIB: %.2f bilhões de reais\n", pibC01);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalC01);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC01);

    printf("\n\n========| Carta 02 |========\n");
    printf("Estado: %c\n", estadoC02);
    printf("Código: %s\n", codigoC02);
    printf("Nome da Cidade: %s\n", nomeCidadeC02);
    printf("População: %d habitantes\n", populacaoC02);
    printf("Área: %.2f km²\n", areaC02);
    printf("PIB: %.2f bilhões de reais\n", pibC02);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalC02);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC02);

    return 0;
}
