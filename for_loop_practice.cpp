#include <stdio.h>
#include <stdlib.h>
int main()
{
//BEGIN:
  int i;
  int N;
  //int Sum;
  //char *Sum;
  int Sum=0; 
  //scanf("%d",&Sum);
//BEGIN;
  printf("�п�JN:");
  //scanf("%d",&Sum);
  scanf("%d",&N);
  
  for(i=0;i<=N;i++)
  {
    Sum = Sum+i;
  }
  printf("1+2+...+%d =%d",N,Sum);
  system("pause");
  //goto BEGIN; 
//COTINUE; 
  return Sum;
}



int sum(int n) {
    int i; // �����ثe�n�B�z���Ʀr
    int sum = 0; // ������ثe����`�M
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}
