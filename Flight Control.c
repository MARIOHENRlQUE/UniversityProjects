
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
int gNumberOfKmPlannedStretch=0, gNumberOfKmAlternativeStretch=0, gMaxTankCapacity=0, gAmountOfFuelInTheShip=0;
float gAverageKmPerLiter=0;
int main(){
  system("cls");
  printf("+++++++++++++++++++++++++ Start of the flitht control program +++++++++++++++++++++++++++\n");
  system("pause");
  system("cls");
  int entrada(void);
  entrada();
  system("clear");
  int processamento(void);
  processamento();
  
  return 0;
}
int entrada(void){
  printf("DIGITE A MEDIA EM L/KM QUE A AERONAVE GASTA, ");
  printf("EXEMPLO(3.6):\t");
  scanf("%f", &gAverageKmPerLiter);
  fflush(stdin);
  printf("\n");
  printf("DIGITE A CAPACIDADE MAXIMA DO TANQUE EM LITROS, ");
  printf("EXEMPLO(26000):\t");
  scanf("%d", &gMaxTankCapacity);
  fflush(stdin);
  printf("\n");
  printf("DO PONTO DE PARTIDA AT� A ROTA PRINCIPAL S�O QUANTOS KM?, ");
  printf("EXEMPLO(1100):\t");
  scanf("%d", &gNumberOfKmPlannedStretch);
  fflush(stdin);
  printf("\n");
  printf("DO PONTO DE PARTIDA AT� A ROTA ALTERNATIVA S�O QUANTOS KM?, ");
  printf("EXEMPLO(600):\t");
  scanf("%d", &gNumberOfKmAlternativeStretch);
  fflush(stdin);
  printf("\n");
  printf("QUAL A QUANTIDADE DE COMBUSTIVEL J� PRESENTE NA AERONAVE EM LITROS, ");
  printf("EXEMPLO(5000):\t");
  scanf("%d", &gAmountOfFuelInTheShip);
  fflush(stdin);
  printf("\n");
}
int processamento(void){
  int trechoTotalKm = (gNumberOfKmPlannedStretch + gNumberOfKmAlternativeStretch) * 1.3;
  
  int quantTrechoPlanejadoEmLitros = (quantTrechoPlanejadoEmLitros / gNumberOfKmPlannedStretch), quantKmTrechoAlternativoEmLitros = (quantKmTrechoAlternativoEmLitros / gNumberOfKmAlternativeStretch), 
  quantidadeDeCombustivelNecessariaTrechoTotal = (trechoTotalKm * 3.6), quantidadeNecessariaAbastecimento = quantidadeDeCombustivelNecessariaTrechoTotal - gAmountOfFuelInTheShip;
  if(gAmountOfFuelInTheShip < quantidadeDeCombustivelNecessariaTrechoTotal){
    if((quantidadeDeCombustivelNecessariaTrechoTotal + gAmountOfFuelInTheShip) > gMaxTankCapacity){
        printf("Voo Reprovado, reveja seu planejamento.\n");
    }else{
      printf("Voo Aprovado, bom voo!");
      printf("\n");
      printf("DO PONTO DE PARTIDA AT� TRECHO PRINCIPAL A AERONAVE VAI FAZER %d KM\n", gNumberOfKmPlannedStretch);
      printf("\n");
      printf("DO PONTO DE PARTIDA AT� TRECHO ALTERNATIVO A AERONAVE VAI FAZER %d KM\n", gNumberOfKmAlternativeStretch);
      printf("\n");
      printf("SOMANDO O TRECHO PRINCIPAL MAIS O ALTERNATIVO E COM A MARGEM DE SEGURAN�A A AERONAVE TEM COMO TRECHO TOTAL %d KM\n", trechoTotalKm);
      printf("\n");
      printf("PARA PERCORRER O TRECHO TOTAL COM UMA MARGEM DE SEGURAN�A, O AVI�O DEVE TER %d LITROS ABASTECIDOS ANTES DE DECOLAR\n", quantidadeDeCombustivelNecessariaTrechoTotal);
      printf("\n");
      printf("COM BASE NO COMBUSTIVEL NA AERONAVE E A ROTA TOTAL DE SEGURAN�A, A MESMA DEVE ABASTECER %d LITROS PARA DECOLAR\n", quantidadeNecessariaAbastecimento);
      printf("\n");
    }
  }else{
    printf("Voo Aprovado, bom voo!\n");
    printf("A AERONAVE N�O VAI PRECISAR ABASTECER, A QUANTIDADE DE COMBUSTIVEL PRESENTE NA MESMA � MAIOR QUE A QUANTIDADE DE SEGUNDA TOTAL PARA O PROXIMO VOO\n");
    printf("\n");
    printf("DO PONTO DE PARTIDA AT� TRECHO PRINCIPAL A AERONAVE VAI FAZER %d KM\n", gNumberOfKmPlannedStretch);
    printf("\n");
    printf("DO PONTO DE PARTIDA AT� TRECHO ALTERNATIVO A AERONAVE VAI FAZER %d KM\n", gNumberOfKmAlternativeStretch);
    printf("\n");
    printf("SOMANDO O TRECHO PRINCIPAL MAIS O ALTERNATIVO E COM A MARGEM DE SEGURAN�A A AERONAVE TEM COMO TRECHO TOTAL %d KM\n", trechoTotalKm);
    printf("\n");
    printf("PARA PERCORRER O TRECHO TOTAL COM UMA MARGEM DE SEGURAN�A, A AERONAVE DEVE TER %d LITROS ABASTECIDOS ANTES DE DECOLAR\n", quantidadeDeCombustivelNecessariaTrechoTotal);
    printf("\n");
    printf("QUANTIDADE DE COMBUSTIVEL J� PRESENTE NA AERONAVE EM LITROS � DE %d\n", gAmountOfFuelInTheShip);
    printf("\n");
    printf("COM BASE NO COMBUSTIVEL NA AERONAVE E A ROTA TOTAL DE SEGURAN�A, A MESMA DEVE ABASTECER 0 LITROS PARA DECOLAR\n");
    printf("\n");
  } 
}
