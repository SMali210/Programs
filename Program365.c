#include<stdio.h>

void Dispaly(int Arr[] ,int isize)
{
      int icnt = 0;

      for(icnt = 0;icnt < isize;icnt++)
      {
            printf("%d\n",Arr[icnt]);
      }
}

int main()
{
      int Brr[5] = {10,20,30,40,50};

      Dispaly(Brr,5);

      return 0;
}