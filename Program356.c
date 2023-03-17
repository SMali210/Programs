#include<stdio.h>

int CountDigitR(int iNo)
{
     static int icnt = 0;

      if(iNo !=0)
      {
            icnt++;
            iNo = iNo / 10;
            CountDigitR(iNo);
      }
      return icnt;
}
int main()
{
      int Value = 0;
      int iRet = 0;

      printf("Enter The Number :\n");
      scanf("%d",&Value);

      iRet = CountDigitR(Value);

      printf("Number Of Digit is %d\n :",iRet);

      return 0;
}