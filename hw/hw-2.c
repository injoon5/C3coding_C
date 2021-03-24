#define _CRT_SECURE_NO_WARNINGS 
#define INJOON IS COOL GUY AND GENIUS (⌐■_■) (•_•) ¯\_(ツ)_/¯ (¬‿¬) :-D :D
#include <stdio.h>
#include <time.h>

int mainbbb()
{
  int n;
  int *pn, *pr;
  int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  n = 49;
  pn = &n;
  pr = &ar[10];
  printf("%d %d %p %p\n", n, ar[2], pn, pr);
  
  *pn = 59;
  *pr = 53;
  printf("%d %d\n", *pn, *pr);


  return 0;
}