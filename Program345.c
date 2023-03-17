
// 0000  0000  0000  0000  0000  0000  0000  0000

// Start  = 7
// End   = 17

// Input  0010  1010  1010  1110  1101  1010  0110  1101

// Output 0010  1010  1010  1111  0010  0101  1010 1101

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT No ,UINT Start ,UINT End)
{
      UINT Mask1 = 0XFFFFFFFF;
      UINT Mask2 = 0XFFFFFFFF;
      UINT Mask  = 0;
      UINT Result = 0;

      Mask1 = Mask1<<(Start -1);
      Mask2 = Mask2>>(32-End);
      Mask = Mask1 & Mask2;

      Result = No ^ Mask;

      return Result;
}
int main()
{
      UINT Value = 0;
      UINT i = 0;
      UINT j = 0;
      UINT Ret = 0;
      printf("Please enter number :\n");
      scanf("%d",&Value);

      printf("Enter Satrting Bit Position \n");
      scanf("%d",&i);

      printf("Enter Ending Bit Postion \n");
      scanf("%d",&j);

      Ret = ToggleRange(Value,i,j);
      printf("Updated number is : %d\n",Ret);

      return 0;
}