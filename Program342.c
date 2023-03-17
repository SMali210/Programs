#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No,UINT Pos1,UINT Pos2)
{
      UINT iMask1 = 0X00000001;  
      UINT iMask2 = 0X00000001;  // UINT iMask = 1;

      UINT Result = 0;
    UINT  iMask = 0;

      if(((Pos1 < 1 )||( Pos1 > 32))||((Pos2 < 1 )||( Pos2 > 32)))
      {
            printf("Invalid Position it should between 1 to 32\n");
            return false;
      }

      iMask1 = iMask1 <<(Pos1 -1);  // 
      iMask2 = iMask2 <<(Pos2 -1);

      iMask = iMask1 | iMask2;

      Result = No & iMask;

      if(Result == iMask)
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
     UINT Value = 0;
      UINT position1 = 0;
       UINT position2 = 0;
     bool bRet = false;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      printf("Enter The position1 of bit\n");
      scanf("%d",&position1);

      printf("Enter The position2 of bit\n");
      scanf("%d",&position2);

      bRet = CheckBit(Value,position1,position2);

      if(bRet == true)
      {
            printf("Bit at The Position %d & %d is ON\n",position1,position2);
      }
      else
      {
            printf("Bit at The Position %d  & %d is OFF\n",position1,position2);
      }
      return 0;
}