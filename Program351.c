#include<stdio.h>

int Factorial(int No)
{
     static int iFact = 1;
     static int iCnt = 1;

      if(iCnt <= No)
      {
            iFact = iFact  * iCnt;
            iCnt++;
           Factorial(No);
      }
      return iFact;
}

int main()
{
     int Value = 0;
     int iRet = 0;
     printf("Enter the number\n");
     scanf("%d",&Value);
     iRet =  Factorial(Value);
     printf("Addition is : %d\n",iRet);

      return 0;
}