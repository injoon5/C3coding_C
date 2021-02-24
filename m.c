#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int o()
{
  int korean;
  printf("국어");
  scanf( "%d", &korean );
  int english;
  printf("영어");
  scanf( "%d", &english ); 
  int math;
  printf("수학");
  scanf( "%d", &math ); 
  int science;
  printf("과학");
  scanf( "%d", &science );  
  int total1 = (korean+english+math+science)/4;
  int total = total1/10;
  printf("%d\n", total1);
  switch (total)
  {
  case 10:
    printf("Good!");
    break;  
  case 9:
    printf("Good!");
    break;       
  case 8:
    printf("OK");
    break;
  case 7:
    printf("fight!");
    break;    
  default:
    printf("Youre a failure. You should just go and die");
    break;
  }



  return 0;
}
