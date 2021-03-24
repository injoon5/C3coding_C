#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int gugudan()
{
  int i = 1;
  int h = 1;
  int count = 1;

  for (count = 1;count<=10;count++)
  {
    printf("%d단     ", count);
  }
  printf("\n");
  for (i = 1;i<=10;i++)
  {
    	for (h = 1;h<=10;h++)
    	{
      	printf("%d×%d=%d\t", h, i, i*h);
    	}
      printf("\n");
  }
  return 0;
}