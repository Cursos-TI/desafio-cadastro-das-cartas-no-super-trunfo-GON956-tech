#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste DANRLLEY

#include <stdio.h>

int main() {
    // Dados carta 1
    char estado1 [20], codigo1[4], cidade1[50]; //tive muito problema pq esqueci de declacar uma string
    unsigned long int populacao1;
    float area1, pib1; //estou colocando as variaveis uma do lado da outra pq vi o professor sergio, mas me perdi um pouco o ideal é declarar uma por uma
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Dados carta 2
    char estado2 [20], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada carta 1 
    printf(" Carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %s", &estado1);
    
    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1);
    
    printf("Nome da cidade: ");
    scanf("%10s", cidade1); //coloquei %10s para diferebciar de estado, pq no proximo trabalho vou precisar diferenciar um do outro
    
    printf("População: ");
    scanf("%lu", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    //  Entrada carta 2 
    printf(" Carta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %s", &estado2);
    
    printf("Código (ex: B02): ");
    scanf(" %3s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %10s", cidade2);
    
    printf("População: ");
    scanf("%lu", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    //  Comparação
    printf("Comparação de Cartas\n"); // foi muito dificil essa parte não estava conseguindo acertar, ralei aqui 
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0); 
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
