#include<stdio.h>

int CountFrequency(char *str,char ch)
{
      int iCnt = 0;

      while(*str !='\0')
      {
            if(*str == ch)
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
      char cValue = '\0';
      

      printf("plese enter The string :\n");
      scanf("%[^'\n']",Arr);

      printf("Please enter the charchter\n");
      scanf(" %c",&cValue);

      iRet = CountFrequency(Arr ,cValue);

      printf("Frequency of a Letter is :%d\n",iRet);


      return 0;
}