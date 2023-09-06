#include <stdio.h>

#define SEXO_FEMININO 1

int main ( ) {
  char sexo = SEXO_FEMININO;

  const char SEXO_MASCULINO = 2;

  // SEXO_MASCULINO = 0; deu ruim!!!!
  
  return 0;
}