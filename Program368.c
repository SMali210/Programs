#include<stdio.h>

int SummationR(int Arr[] ,int isize)
{
     static int icnt = 0;
     static int iSum = 0;
      if(icnt < isize)
      {
            iSum = iSum + Arr[icnt];
            icnt++;
           SummationR(Arr,isize);
      }
      return iSum;
}

int main()
{
      int Brr[5] = {10,20,30,40,50};
      int iRet = 0;

     iRet =  SummationR(Brr,5);

      printf("Addition of array %d\n",iRet);
      return 0;
}