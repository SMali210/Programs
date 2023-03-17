#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFiveAndThree(int iNo)
{
      
      if(iNo % 5 == 0) 
      {
            if(iNo % 3 == 0)
            {
                  return true;
            }
            else
            {
                  return false;
            }
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

      iRet = DivisibleByFiveAndThree(ivalue);

      if(iRet == true)
      {
            printf("Number is divisible by five and three :\n");
      }
      else
      {
            printf("Number is not divisible by five and three :\n");
      }

      return 0;
}
