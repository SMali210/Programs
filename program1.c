#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
      
      if(iNo % 5 == 0)
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
      int ivalue = 0;
      bool iRet = false;

      printf("Enter the Number :\n");
      scanf("%d",&ivalue);

      iRet = DivisibleByFive(ivalue);

      if(iRet == true)
      {
            printf("Number is divisible by five :\n");
      }
      else
      {
            printf("Number is not divisible by five :\n");
      }

      return 0;
}