#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{

int a;
int b;
int c;

printf("정수를 입력하세요: ");
scanf("%d", &a);
c = a % 7;

  
printf("%d\n", c == 5);
c = a % 3;
printf("%d\n", c == 0);
c = a % 2;
printf("%d\n", c != 0);
c = a % 3;
printf("%d\n", c == 0 && a%2==0);

printf("%d\n", (a/4 || a/7) == 0);


  
return 0;
}