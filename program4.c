#include<stdio.h>

void Display(int iNo)
{
      //printf five times on jay ganesh 
      int iCnt = 0;
      for(iCnt = 1;iCnt<=iNo;iCnt++)
      {
            printf("jay ganesh...\n");
      }
}
int main()
{
      int ivalue = 0;
      printf("Enter the number :\n");
      scanf("%d",&ivalue);

      Display(ivalue);
      return 0;
}