#include<stdio.h>

int strlenX(char str[])
{
      int iCnt = 0;
      int i = 0;

      for(i = 0;str[i]!='\0';i++)
      {
            iCnt++;
      }
      return iCnt;
}
int main()
{

      char Arr [20];  ///static memory alloction
      int iRet = 0;

      printf("Plese enter String\n :");
      //scanf("%s",Arr);
      scanf("%[^'\n']s",Arr);

     iRet = strlenX(Arr);

     printf("Number of Characters are %d\n :",iRet);
     
      return 0;
}