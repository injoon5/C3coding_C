#define _CRT_SECURE_NO_WARNINGS 
#define INJOON IS COOL GUY AND GENIUS (⌐■_■) (•_•) ¯\_(ツ)_/¯ (¬‿¬) :-D :D
#include <stdio.h>
#include <time.h>

int maijjjn()
{
  int i, k;
  int ar0[6][5] = {{23, 22, 27, 21, 24}, {21, 22, 25, 24, 23}, {20, 23, 22, 21, 24}, {25, 26, 24, 27, 28}, {26, 24, 28, 29, 26}, {27, 28, 29, 26, 27}};

  for (i = 0; i<6; i++)
  {
    for (k = 0; k<5; k++)
    {
        printf("%d학년 %d반: %d명\n", i, k+1, ar0[i][k]);
    }
    printf("\n");
  }
  return 0;
}