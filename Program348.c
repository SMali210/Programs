#include<stdio.h>
// * * * *

void DisplayR()
{
     static int iCnt = 1;

      if(iCnt <=4)
      {
            printf("*\t");
            iCnt++;
            DisplayR();   // Recursive call;
      }
}
int main()
{
      printf("Inside main Function\n");

      DisplayR();

      printf("Inside main Function\n");
      
      return 0;
}