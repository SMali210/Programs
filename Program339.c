#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 4
// 0000 0000 0000 0000 0000 000 0000 0000
// 0000 0000 0000 0000 0000 0000 0000 0000
//  0    0    0    0    0    0    0     8

// 0X00000008
UINT ToggleBit(UINT No)
{
      UINT iMask = 0X00000070;

      // iAns = 0;
      // iAns = No & iMask
      return (No ^ iMask);
}
int main()
{
     UINT Value = 0;
      UINT iRet = 0;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      iRet = ToggleBit(Value);

      printf("Upadated number is : %d\n",iRet);

      return 0;
}