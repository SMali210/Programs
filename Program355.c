#include<stdio.h>

int CountDigit(int No)
{
      int Digit  = 0;
      int icnt = 0;
      while(No !=0)
      {
            Digit = No % 10;
            icnt++;
            No = No / 10;
      }
      return icnt;
}
int main()
{
      int Value = 0;
      int iRet = 0;
      printf("enter the number : \n");
      scanf("%d",&Value);

      iRet = CountDigit(Value);

      printf("Number of Digit is : %d\n",iRet);

      return 0;
}