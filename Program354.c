#include<stdio.h>
#include<stdbool.h>

bool  CheckPerfectR(int No)
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
          CheckPerfectR(No);
      }
      
      if(iSum == No)
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
     int Value = 0;
    bool iRet = false;
     
     printf("Enter the number\n");
     scanf("%d",&Value);
    iRet =CheckPerfectR(Value);
    
    if(iRet == true)
    {
       printf("%d is Perfect Number ",Value);
    }
    else
    {
       printf("%d is Not perfect number",Value);
    }
      return 0;
}