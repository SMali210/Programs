#include<stdio.h>

int Addition(int No)
{
     static int iSum = 0;
     static int iCnt = 1;

      if(iCnt <= No)
      {
            iSum = iSum  + iCnt;
            iCnt++;
            Addition(No);
      }
      return iSum;
}

int main()
{
     int Value = 0;
     int iRet = 0;
     printf("Enter the number\n");
     scanf("%d",&Value);
     iRet =  Addition(Value);
     printf("Addition is : %d\n",iRet);

      return 0;
}