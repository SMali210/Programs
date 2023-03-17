#include<stdio.h>

typedef unsigned int UINT;

int countOnBit(UINT No)
{
      int iCnt = 0;
      int Digit = 0;

      while(No !=0)
      {
            Digit = No % 2;
            if(Digit == 1)
            {
                  iCnt++;
            }

            No = No / 2;
      }
      return iCnt;

}
int main()
{
     UINT Value = 0;
      int iRet = 0;

      printf("Enter The number : \n");
      scanf("%d",&Value);

      iRet = countOnBit(Value);

      printf("Number of bits which are On : %d\n",iRet);

      return 0;
}