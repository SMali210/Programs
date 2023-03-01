#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
     
      bool bFlag = false;

      while(*str !='\0')
      {
            if(*str == ch)
            {
                  bFlag = true;
                  break;
            }
            str++;
      }
      return bFlag;
}
int main()
{
      char Arr[10];
      bool bRet = false;
      char cValue = '\0';
      

      printf("plese enter The string :\n");
      scanf("%[^'\n']",Arr);

      printf("Please enter the charchter\n");
      scanf(" %c",&cValue);

      bRet = Check(Arr ,cValue);

      if(bRet == true)
      {
            printf("Charecter is Present in the String \n");
      }
      else
      {
             printf("Charecter is not Present in the String \n");
      }

      return 0;
}