#include <stdio.h>

int main(){
  // int x;
  int y = 0;
  int z = 10;
  
  char caracter; // ou '\0' '\n', '\t' ;// 'a', 'b', 'c', -128 a 127 - 1 byte

  caracter = 'a';
  caracter = 'b';

  unsigned char caracter_sem_sinal; // 0 a 255

  char i;
  char j;

  char string[10]; = "um texto"
  
  int inteiro; // -2147483648 a 2147483647 - 4 bytes

  unsigend int inteiro_sem_sinal; // 0 a 4294967295

  short int inteiro_curto; // -32768 a 32767 - 2 bytes

  unsigned short int inteiro_curso_sem_sinal; // 0 a 65535

  long int inteiro_longo; // -922337203654775808 a 9223372036854775807 - bytes
  
  float flutante; // 0.123456f - 4 bytes 
  
  double duplo; // 0.123456789012345 - 8 bytes
  
  void nada;// 1 byte
  
  return 0;
}