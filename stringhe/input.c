#include <stdio.h>
#define DIM 20
int main() {
  char nome[DIM];
  int len;
  printf("Come ti chiami?\n");
  scanf("%s", nome);
  while (nome[len] != 0)
  {
    len++;
  }
  printf("Ciao, %s!\nIl nome è lungo %d caratteri\n", nome, len);
}