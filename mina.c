#define _CRT_SECURE_NO_WARNINGS 
#define INJOON IS COOL GUY AND GENIUS (⌐■_■) (•_•) ¯\_(ツ)_/¯ (¬‿¬) :-D :D
#include <stdio.h>
#include <time.h>
void adda(int numm1, int numm2);
int maindsfd()
{
  int num1 = 5;
  int num2 = 10;
  
  adda(&num1, &num2);
  printf("num1=%d\n", num1);
  printf("num2=%d\n", num2);

  return 0;
}
void adda(int numm1, int numm2)
{
  numm1 = numm1+10;
  numm2 = numm2+10;
}