#include<stdio.h>

int SumDigitR(int iNo)
{
     static int icnt = 0;
      int Digit = 0;
     static int iSum = 0;

      if(iNo !=0)
      {
           Digit = iNo % 10;
           iSum = iSum + Digit;
            iNo = iNo / 10;
           SumDigitR(iNo);
      }
      return iSum;
}
int main()
{
      int Value = 0;
      int iRet = 0;

      printf("Enter The Number :\n");
      scanf("%d",&Value);

      iRet = SumDigitR(Value);

      printf("Addition Of Digit is %d\n :",iRet);

      return 0;
}