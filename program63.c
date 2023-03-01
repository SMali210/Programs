#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
      int Digit = 0;
      int Reverse = 0;
      int iTemp = iNo;

      if(iNo < 0)
      {
            iNo = -iNo;
      }
      for( Reverse = 0 ;iNo != 0;iNo = iNo / 10)
      {
            Digit = iNo % 10;
            Reverse = (Reverse * 10)+Digit;
            
      }
      if(Reverse == iTemp)
      {
            return true;
      }
      else
      {
            return false;
      }
}
int main()
{
      int iValue = 0;
      bool biRet = false;

      printf("Enter teh Number \n");
      scanf("%d",&iValue);

      biRet = CheckPallindrome(iValue);

      if(biRet == true)
      {
            printf("%d is pallindrome number \n",iValue);
      }
      else
      {
            printf("%d is not pallindrome number \n",iValue);
      }

      return 0;
}