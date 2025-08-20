#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
       //Dados carta 1
    int população1, pontos1;
    float area1, pib1;
    char cidade1[50];
    char estado1; 
    char codigo1[4];

     //Dados carta 2
    int população2, pontos2;
    float area2, pib2;
    char cidade2[50];
    char estado2; 
    char codigo2[4];

    //cadastro carta 1
    printf(" carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (A01):");
    scanf("%3s", codigo1);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &população1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em milhoes): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    //cadastro carta 2
    printf(" carta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (B01):");
    scanf("%3s", codigo2);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("d%", &população2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em milhoes): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    //Mostrar carta 1
    printf("Carta 1 \n");
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    / Mostrar carta 2
    printf( Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    
    return 0;
}
