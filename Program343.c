#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//
// 0000 1111 0000 1111 0000 1111 0000 1111
// 0     F    0    F      0   F     0    F  
//
//0X0F0F0F0F
bool ToggleBit(UINT No)
{
      UINT iMask = 0X0F0F0F0F; 
      UINT Result = 0;

      Result = No ^ iMask;

      return Result;

     
}
int main()
{
     UINT Value = 0;
      UINT Ret = 0;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      Ret = ToggleBit(Value);

      printf("Upadated bits is %d\n",Ret);

}