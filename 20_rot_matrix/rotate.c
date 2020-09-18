#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate (char matrix[10][10])
{
  char novamatriz[10][10] = {0};
  int n = 10;
  //construir a matriz temp, ja que vai dar muito trampo fazer in-place
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; i < 10; j++)
    {
      novamatriz[i][j] = matrix[i][j];
    }
  }
  //agora faremos a rotacao
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      matrix[i][j] = novamatriz[i][j];
    }
  }
}
