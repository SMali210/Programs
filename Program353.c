#include<stdio.h>

int  SumFactorR(int No)
{
     static int icnt = 1;
     static int iSum = 0;
      
      if(icnt <= (No /2))
      {
            if((No % icnt) == 0)
            {
                 iSum = iSum + icnt;
            }

            icnt++;
            SumFactorR(No);
      }
      return iSum;
}

int main()
{
     int Value = 0;
     int iRet = 0;
     
     printf("Enter the number\n");
     scanf("%d",&Value);
    iRet = SumFactorR(Value);
     
     printf("Addition of factor is %d\n:",iRet);
      return 0;
}