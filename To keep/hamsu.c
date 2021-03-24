#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int Sum(int num1)
{
  int n=1;
  int returnval=0;
  for (n=0;num1>=n;n++)
  {
    returnval += n;
  }
  return returnval;
}

int Power(int num1)
{
  return num1*num1;
}

int ShowSum(int num1, int num2)
{
  if (num1<num2)
  {
    int n=1;
    int big = 0;
    for (n=num1;n<=num2;n++)
    {
      printf("%d ",n);
      big += n;
    }
    printf("  %d",big);
  }
  if (num1>num2)
  {
    int n;
    int big = 0;
    for (n=num1;n>=num2;n--)
    {
      printf("%d ",n);
      big+=n;
    }
    printf("  %d",big);
  }
  return 1;
}

void hamsu()
{

  printf("%d",ShowSum(10000000,90));

}


