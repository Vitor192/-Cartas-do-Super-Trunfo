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

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

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

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

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
    
    setColor(7); // Branco
    printf("+-------------------------+  +-------------------------+\n");

    // Comparação de atributos
    printf("\n");
    setColor(14); // Amarelo
    drawLine(60, '=');
    printCentered("COMPARACAO DE ATRIBUTOS", 60);
    drawLine(60, '=');
    setColor(7); // Branco
    
    // População
    printf("\nPopulacao: ");
    if (populacao1 > populacao2) {
        setColor(11);
        printf("Carta 1 vence");
    } else if (populacao2 > populacao1) {
        setColor(10);
        printf("Carta 2 vence");
    } else {
        setColor(7);
        printf("Empate");
    }
    
    // Área
    setColor(7);
    printf("\nArea: ");
    if (area1 > area2) {
        setColor(11);
        printf("Carta 1 vence");
    } else if (area2 > area1) {
        setColor(10);
        printf("Carta 2 vence");
    } else {
        setColor(7);
        printf("Empate");
    }
    
    // PIB
    setColor(7);
    printf("\nPIB: ");
    if (pib1 > pib2) {
        setColor(11);
        printf("Carta 1 vence");
    } else if (pib2 > pib1) {
        setColor(10);
        printf("Carta 2 vence");
    } else {
        setColor(7);
        printf("Empate");
    }
    
    // Pontos Turísticos
    setColor(7);
    printf("\nPontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        setColor(11);
        printf("Carta 1 vence");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        setColor(10);
        printf("Carta 2 vence");
    } else {
        setColor(7);
        printf("Empate");
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