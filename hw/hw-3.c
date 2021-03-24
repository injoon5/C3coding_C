#define _CRT_SECURE_NO_WARNINGS 
#define INJOON IS COOL GUY AND GENIUS (⌐■_■) (•_•) ¯\_(ツ)_/¯ (¬‿¬) :-D :D
#include <stdio.h>
#include <time.h>

int mainafdfsdf()
{
  int a, b;
  int add, sub, mul, div;
  int *pa, *pb;

  pa = &a;
  pb = &b;

  a = 30;
  b = 55;
  add = *pa+*pb;
  printf("add = %d\n", add);

  *pa = 9;
  *pb = 7;
  sub = *pa-*pb;
  printf("sub = %d\n", sub);

  *pa = 12;
  b = 3;
  mul = *pa * *pb;
  printf("mul = %d\n", mul);

  a = 45;
  *pb = 5;
  div = *pa / *pb;
  printf("div = %d\n", div);

  return 0;
}