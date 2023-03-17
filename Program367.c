#include<stdio.h>

void DispalyR(int Arr[] ,int isize)
{
     static int icnt = 0;

      if(icnt < isize)
      {
            printf("%d\n",Arr[icnt]);
            icnt++;
            DispalyR(Arr,isize);
      }
}

int main()
{
      int Brr[5] = {10,20,30,40,50};

      DispalyR(Brr,5);

      return 0;
}