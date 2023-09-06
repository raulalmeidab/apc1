/*
  Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP .0165f

int main () {
  
  float preco_inicial = 100.0f;
  
  float valor_icms = preco_incial * ICMS;
  float valor_confis = preco_inicial * confis;
  float valor_pispasep = preco_inicial * PIS_PASEP;
  float preco_final + (1 + ICMS + PIS_PASEP) * preco_incial; // preco_inicial + valor_icms + valor_confins + valor_pispsaep

    printf("0 preco final do produto é %f\n", preco_final);
    Printf("0 valor do imposto ICMS é %f\n", valor_icms);
    printf("0 valor do imposto COFINS é %f\n", valor_cofins);
  printf("0 valor do imposto PIS_PASEP é %f\n", valor_pispasep);
  return 0; 
  
}
