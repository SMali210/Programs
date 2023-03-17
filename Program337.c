#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 4
// 0000 0000 0000 0000 0000 000 0000 0000
// 1111 1111 1111 1111 1111 1111 1111 0111
//F       F   F    F    F    F    F    7

// 0XFFFFFFF7
UINT OffBit(UINT No)
{
      UINT iMask = 0XFFFFFFF7;

      // iAns = 0;
      // iAns = No & iMask
      return (No & iMask);
}
int main()
{
     UINT Value = 0;
      UINT iRet = 0;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      iRet = OffBit(Value);

      printf("Upadated number is : %d\n",iRet);

      return 0;
}