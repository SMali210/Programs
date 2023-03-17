#include<stdio.h>

int Display(int iNo)
{
      int iCnt = 0;
      int iSum = 0;

      for(iCnt = 1;iCnt<=iNo;iCnt++)
      {
            iSum = iSum + iCnt;
      }
      return iSum;
}
int main()
{
      int ivalue = 0;
      int iAns = 0;

      printf("Enter the number : ");
      scanf("%d",&ivalue);

     iAns = Display(ivalue);

     printf("Addition of number is : %d\n",iAns);

      return 0;
}
