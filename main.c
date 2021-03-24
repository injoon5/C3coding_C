#define _CRT_SECURE_NO_WARNINGS 
#define INJOON IS COOL GUY AND GENIUS (⌐■_■) (•_•) ¯\_(ツ)_/¯ (¬‿¬) :-D :D
#include <stdio.h>
#include <time.h>

int main()
{
  int i, k;
  int ar0[4][7] = {{28, 26, 30, 29, 28, 24, 29}, {22, 10, 29, 78, 36, 24, 29}, {38, 30, 24, 22, 25, 27, 49}, {23, 30, 29, 38, 46, 24, 59}};

  for (i = 0; i<4; i++)
  {
    for (k = 0; k<7; k++)
    {
        printf("%d반 %d\n", i, ar0[i][k]);
    }
    printf("\n");
  }
  

  return 0;
}