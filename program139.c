#include<stdio.h>

int Countch(char *str)
{
      int iCnt = 0;

      while(*str !='\0')
      {
            if((*str == 'a') || (*str == 'A'))
            {
                  iCnt++;
            }
            str++;
      }
      return iCnt;
}
int main()
{
      char Arr[10];
      int iRet = 0;

      printf("plese enter The string :\n");
      scanf("%[^'\n']",Arr);

      iRet = Countch(Arr);

      printf("Frequency of a is :%d\n",iRet);


      return 0;
}