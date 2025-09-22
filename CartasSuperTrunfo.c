#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //---VARIAVEIS DA CARTA 1---

char estado1;
char codigodacarta1[5];
char nomedacidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;


//---VARIAVEIS DA CARTA 2---

char estado2;
char codigodacarta2[5];
char nomedacidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

// Área para entrada de dados
// ===============================================
//           LEITURA DOS DADOS DA CARTA 1
// ===============================================

printf ("Estado: ");
scanf(" %c", &estado1); 

printf("codigo da carta: ");
scanf(" %s", codigodacarta1);

printf("Nome da cidade: ");
scanf(" %s", nomedacidade1);

printf("População: ");
scanf(" %d", &populacao1);

printf("Area: ");
scanf(" %f", &area1);

printf("PIB ");
scanf(" %f", &pib1);

printf("Ponto Turistico: ");
scanf(" %d", &pontosturisticos1);


// ===============================================
//           LEITURA DOS DADOS DA CARTA 2
// ===============================================

printf ("Estado: ");
scanf(" %c", &estado2); 

printf("codigo da carta: ");
scanf(" %s", codigodacarta2);

printf("Nome da cidade: ");
scanf(" %s", nomedacidade2);

printf("População: ");
scanf(" %d", &populacao2);

printf("Area: ");
scanf(" %f", &area2);

printf("PIB ");
scanf(" %f", &pib2);

printf("Ponto Turistico: ");
scanf(" %d", &pontosturisticos2);

    // Área para exibição dos dados da cidade
    // ===============================================
    //           EXIBIÇÃO DOS DADOS FINAIS
    // ===============================================

printf("- Codigo da carta: %s\n - Estado: %c\n - Nome da cidade: %s\n - População: %d\n", codigodacarta1, estado1, nomedacidade1, populacao1);
printf("- Area: %.2f\n - PIB: %.2f\n - Pontos Turisticos: %d\n", area1, pib1, pontosturisticos1);

printf("- Codigo da carta: %s\n - Estado: %c\n - Nome da cidade: %s\n - População: %d\n", codigodacarta2, estado2, nomedacidade2, populacao2);
printf("- Area: %.2f\n - PIB: %.2f\n - Pontos Turisticos: %d\n", area2, pib2, pontosturisticos2);

return 0;
} 
