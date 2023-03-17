#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OFFBit(UINT No,UINT Pos)
{
      UINT iMask = 0X00000001;   // UINT iMask = 1;
      UINT Result = 0;
      if((Pos < 1 )||( Pos > 32))
      {
            printf("Invalid Position it should between 1 to 32\n");
            return false;
      }

      iMask = iMask <<(Pos -1);  // Dynamic Mask Formation 
      iMask = ~iMask;

      return(No & iMask);

      
}

int main()
{
     UINT Value = 0;
      UINT position = 0;
     UINT Ret = 0;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      printf("Enter The position of bit\n");
      scanf("%d",&position);

      Ret = OFFBit(Value,position);

      printf("Updated number is : %d\n",Ret);
      return 0;
}