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
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float AreaEmKm1;
    float DensiPop1;
    float PIB1;
    float PIBPC1;
    float SuperPoder1;

    // Variáveis da Carta 2
    char Estado2; 
    char CodigoDaCarta2[4];
    char NomeDaCidade2[50];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float AreaEmKm2;
    float DensiPop2;
    float PIB2;
    float PIBPC2;
    float SuperPoder2;

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
    scanf("%lu", &Populacao1);

    printf("Digite a Área da Cidade da Carta 1 (Km²): ");
    scanf("%f", &AreaEmKm1);

    DensiPop1 = (float) Populacao1 / AreaEmKm1;

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &PIB1);

    PIBPC1 = (float) PIB1 / Populacao1;

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
    scanf("%lu", &Populacao2);

    printf("Digite a Área da Cidade da Carta 2 (Km²): ");
    scanf("%f", &AreaEmKm2);
    
    DensiPop2 = (float) Populacao2 / AreaEmKm2;

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &PIB2);

    PIBPC2 = (float) PIB2 / Populacao2;

    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 2: ");
    scanf("%d", &PontosTuristicos2);

    //Cálculo do Super Poder
    //Se DensiPop1 for zero (0.0), a expressão (DensiPop1 == 0.0) será verdadeira (1)
    //Se for verdadeira, o resultado será 0.0, evitando a divisão por zero.
    //Se for falsa, o resultado será (1.0f / DensiPop1)

    float inversoDensiPop1 = (DensiPop1 == 0.0) ? 0.0 : (1.0f / DensiPop1);
    float inversoDensiPop2 = (DensiPop2 == 0.0) ? 0.0 : (1.0f / DensiPop2);

    //Soma de todos os atributo
    SuperPoder1 = (float)Populacao1 + AreaEmKm1 + PIB1 + PontosTuristicos1 + PIBPC1 + inversoDensiPop1;
    SuperPoder2 = (float)Populacao2 + AreaEmKm2 + PIB2 + PontosTuristicos2 + PIBPC2 + inversoDensiPop2;

  // Área para exibição dos dados da cidade
  // Saída
    printf("\n --- CARTA 1 ---\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f Km²\n", AreaEmKm1);
    printf("Densidade Populacional: %f\n", DensiPop1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("PIB per Capia: %f\n", PIBPC1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    printf("\n --- CARTA 2 ---\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f Km²\n", AreaEmKm2);
    printf("Densidade Populacional: %f\n", DensiPop2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("PIB per Capia: %f\n", PIBPC2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    printf("\n --- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", AreaEmKm1 > AreaEmKm2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensiPop1 < DensiPop2); //Aqui a regra é invertida
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("PIB per Capia: Carta 1 venceu (%d)\n",PIBPC1 > PIBPC2);
    printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n",PontosTuristicos1 > PontosTuristicos2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
return 0;
} 
