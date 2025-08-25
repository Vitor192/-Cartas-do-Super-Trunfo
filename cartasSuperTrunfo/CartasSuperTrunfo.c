#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

// Definição de cores para Windows
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// Função para desenhar uma linha horizontal
void drawLine(int length, char symbol) {
    for (int i = 0; i < length; i++) {
        printf("%c", symbol);
    }
    printf("\n");
}

// Função para centralizar texto
void printCentered(char *text, int width) {
    int len = 0;
    while (text[len] != '\0') len++;
    int spaces = (width - len) / 2;
    
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
    printf("%s\n", text);
}

int main() {
    // Configurar para aceitar acentos
    setlocale(LC_ALL, "Portuguese");
    
    // Carta 1
    char estado1;
    char codigo1[4];       // Exemplo: A01
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável
    float pibPerCapita1;          // Nova variável

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável
    float pibPerCapita2;          // Nova variável

    // Limpar a tela
    system("cls");
    
    // Título do programa
    setColor(14); // Amarelo
    drawLine(60, '=');
    printCentered("SUPER TRUNFO - CIDADES BRASILEIRAS", 60);
    drawLine(60, '=');
    setColor(7); // Branco (cor padrão)
    printf("\n");

    // Cadastro da Carta 1
    setColor(11); // Azul claro
    drawLine(60, '-');
    printCentered("Cadastro da Carta 1", 60);
    drawLine(60, '-');
    setColor(7); // Branco
    
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // lê string com espaços

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area (em km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos novos atributos para Carta 1
    if (area1 > 0) {
        densidadePopulacional1 = (float)populacao1 / area1;
    } else {
        densidadePopulacional1 = 0;
    }
    
    if (populacao1 > 0) {
        pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    } else {
        pibPerCapita1 = 0;
    }

    printf("\n");

    // Cadastro da Carta 2
    setColor(10); // Verde claro
    drawLine(60, '-');
    printCentered("Cadastro da Carta 2", 60);
    drawLine(60, '-');
    setColor(7); // Branco
    
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos para Carta 2
    if (area2 > 0) {
        densidadePopulacional2 = (float)populacao2 / area2;
    } else {
        densidadePopulacional2 = 0;
    }
    
    if (populacao2 > 0) {
        pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais
    } else {
        pibPerCapita2 = 0;
    }

    // Limpar a tela para exibir as cartas
    system("cls");

    // Título da exibição
    setColor(14); // Amarelo
    drawLine(60, '=');
    printCentered("CARTAS CADASTRADAS", 60);
    drawLine(60, '=');
    printf("\n");

    // Exibição das informações em formato de cartas
    printf("+-------------------------+  +-------------------------+\n");
    
    setColor(11); // Azul claro para carta 1
    printf("|        CARTA 1         |  ");
    setColor(10); // Verde claro para carta 2
    printf("|        CARTA 2         |\n");
    
    setColor(7); // Branco
    printf("+-------------------------+  +-------------------------+\n");
    
    // Linha 1: Estado e Código
    setColor(11);
    printf("| Estado: %-14c |  ", estado1);
    setColor(10);
    printf("| Estado: %-14c |\n", estado2);
    
    setColor(11);
    printf("| Codigo: %-14s |  ", codigo1);
    setColor(10);
    printf("| Codigo: %-14s |\n", codigo2);
    
    // Linha 2: Cidade
    setColor(11);
    printf("| Cidade: %-14s |  ", cidade1);
    setColor(10);
    printf("| Cidade: %-14s |\n", cidade2);
    
    // Linha 3: População
    setColor(11);
    printf("| Populacao: %-11d |  ", populacao1);
    setColor(10);
    printf("| Populacao: %-11d |\n", populacao2);
    
    // Linha 4: Área
    setColor(11);
    printf("| Area: %-16.2f |  ", area1);
    setColor(10);
    printf("| Area: %-16.2f |\n", area2);
    
    // Linha 5: PIB
    setColor(11);
    printf("| PIB: %-17.2f |  ", pib1);
    setColor(10);
    printf("| PIB: %-17.2f |\n", pib2);
    
    // Linha 6: Pontos Turísticos
    setColor(11);
    printf("| Pts Turisticos: %-7d |  ", pontosTuristicos1);
    setColor(10);
    printf("| Pts Turisticos: %-7d |\n", pontosTuristicos2);
    
    // Linha 7: Densidade Populacional
    setColor(11);
    printf("| Dens. Pop: %-11.2f |  ", densidadePopulacional1);
    setColor(10);
    printf("| Dens. Pop: %-11.2f |\n", densidadePopulacional2);
    
    // Linha 8: PIB per capita
    setColor(11);
    printf("| PIB per capita: %-7.2f |  ", pibPerCapita1);
    setColor(10);
    printf("| PIB per capita: %-7.2f |\n", pibPerCapita2);
    
    setColor(7); // Branco
    printf("+-------------------------+  +-------------------------+\n");

    // Escolha do atributo para comparação (definido no código)
    // Opções: 1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita
    int atributoEscolhido = 5; // Escolhendo Densidade Populacional para comparação
    char* nomeAtributo;
    int vencedor = 0; // 0 = empate, 1 = carta 1, 2 = carta 2
    
    // Determinando o vencedor com base no atributo escolhido
    switch (atributoEscolhido) {
        case 1: // População (maior vence)
            nomeAtributo = "Populacao";
            if (populacao1 > populacao2) {
                vencedor = 1;
            } else if (populacao2 > populacao1) {
                vencedor = 2;
            }
            break;
            
        case 2: // Área (maior vence)
            nomeAtributo = "Area";
            if (area1 > area2) {
                vencedor = 1;
            } else if (area2 > area1) {
                vencedor = 2;
            }
            break;
            
        case 3: // PIB (maior vence)
            nomeAtributo = "PIB";
            if (pib1 > pib2) {
                vencedor = 1;
            } else if (pib2 > pib1) {
                vencedor = 2;
            }
            break;
            
        case 4: // Pontos Turísticos (maior vence)
            nomeAtributo = "Pontos Turisticos";
            if (pontosTuristicos1 > pontosTuristicos2) {
                vencedor = 1;
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                vencedor = 2;
            }
            break;
            
        case 5: // Densidade Populacional (menor vence)
            nomeAtributo = "Densidade Populacional";
            if (densidadePopulacional1 < densidadePopulacional2) {
                vencedor = 1;
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                vencedor = 2;
            }
            break;
            
        case 6: // PIB per capita (maior vence)
            nomeAtributo = "PIB per capita";
            if (pibPerCapita1 > pibPerCapita2) {
                vencedor = 1;
            } else if (pibPerCapita2 > pibPerCapita1) {
                vencedor = 2;
            }
            break;
    }

    // Exibição do resultado da comparação
    printf("\n");
    setColor(14); // Amarelo
    drawLine(60, '=');
    printCentered("RESULTADO DO JOGO", 60);
    drawLine(60, '=');
    setColor(7); // Branco
    
    printf("\nComparacao de cartas (Atributo: %s):\n\n", nomeAtributo);
    
    // Exibir valores do atributo escolhido para cada carta
    switch (atributoEscolhido) {
        case 1: // População
            printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
            break;
            
        case 2: // Área
            printf("Carta 1 - %s (%c): %.2f km2\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km2\n", cidade2, estado2, area2);
            break;
            
        case 3: // PIB
            printf("Carta 1 - %s (%c): %.2f bilhoes\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhoes\n", cidade2, estado2, pib2);
            break;
            
        case 4: // Pontos Turísticos
            printf("Carta 1 - %s (%c): %d pontos\n", cidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%c): %d pontos\n", cidade2, estado2, pontosTuristicos2);
            break;
            
        case 5: // Densidade Populacional
            printf("Carta 1 - %s (%c): %.2f hab/km2\n", cidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%c): %.2f hab/km2\n", cidade2, estado2, densidadePopulacional2);
            break;
            
        case 6: // PIB per capita
            printf("Carta 1 - %s (%c): R$ %.2f\n", cidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%c): R$ %.2f\n", cidade2, estado2, pibPerCapita2);
            break;
    }
    
    // Exibir o resultado
    printf("\nResultado: ");
    if (vencedor == 1) {
        setColor(11); // Azul para Carta 1
        printf("Carta 1 (%s) venceu!", cidade1);
    } else if (vencedor == 2) {
        setColor(10); // Verde para Carta 2
        printf("Carta 2 (%s) venceu!", cidade2);
    } else {
        setColor(7); // Branco para empate
        printf("Empate!");
    }
    
    // Explicação do critério (para Densidade Populacional)
    if (atributoEscolhido == 5) {
        setColor(7);
        printf("\n\nObs: Para Densidade Populacional, a carta com o MENOR valor vence!");
    }
    
    // Restaurar cor padrão
    setColor(7);
    printf("\n\n");
    drawLine(60, '=');
    printf("Pressione qualquer tecla para sair...");
    getchar();
    getchar();
    
    return 0;
}