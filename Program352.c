#include<stdio.h>

void FactorR(int No)
{
     static int icnt = 1;
      
      if(icnt <= (No /2))
      {
            if((No % icnt) == 0)
            {
                  printf("%d\n",icnt);
            }

            icnt++;
            FactorR(No);
      }
}

int main()
{
     int Value = 0;
     
     printf("Enter the number\n");
     scanf("%d",&Value);
     FactorR(Value);
     
      return 0;
}