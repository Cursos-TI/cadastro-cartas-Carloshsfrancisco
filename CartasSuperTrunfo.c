#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da Carta 1
    char Estado1;  
    char CodigoDaCarta1[4];
    char NomeDaCidade1[50];
    int Populacao1;
    int PontosTuristicos1;
    float AreaEmKm1;
    float PIB1;
    // Variáveis da Carta 2
    char Estado2; 
    char CodigoDaCarta2[4];
    char NomeDaCidade2[50];
    int Populacao2;
    int PontosTuristicos2;
    float AreaEmKm2;
    float PIB2;

  // Área para entrada de dados
  // Entrada da Carta 1
    printf("Digite o Estado da Carta 1 (A-H): ");
    scanf(" %c", &Estado1);
    
    printf("Digite o Código da Carta 1 (ex: A01): ");
    scanf("%s", CodigoDaCarta1);

    getchar(); // consome o \n que sobrou
    printf("Digite o Nome da Cidade da Carta 1: ");
    fgets(NomeDaCidade1, 50, stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1, "\n")] = '\0'; // remove o \n do final

    printf("Digite a População da Cidade da Carta 1: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área da Cidade da Carta 1 (Km²): ");
    scanf("%f", &AreaEmKm1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turisticos da Cidade da Carta 1: ");
    scanf("%d", &PontosTuristicos1);

    // Entrada da Carta 2
    printf("Digite o Estado da Carta 2 (A-H): ");
    scanf(" %c", &Estado2);
    
    printf("Digite o Código da Carta 2 (ex: B02): ");
    scanf("%s", CodigoDaCarta2);

    getchar(); // consome o \n
    printf("Digite o Nome da Cidade da Carta 2: ");
    fgets(NomeDaCidade2, 50, stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = '\0'; // remove o \n do final

    printf("Digite a População da Cidade da Carta 2: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área da Cidade da Carta 2 (Km²): ");
    scanf("%f", &AreaEmKm2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 2: ");
    scanf("%d", &PontosTuristicos2);

  // Área para exibição dos dados da cidade
  // Saída
    printf("\n --- CARTA 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f Km²\n", AreaEmKm1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    printf("\n --- CARTA 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f Km²\n", AreaEmKm2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

return 0;
} 
