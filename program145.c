#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
     
      

      while(*str !='\0')
      {
            if(*str == ch)
            {
                  
                  break;
            }
            str++;
      }
     if(*str == '\0')
     {
            return false;
     }
     else
     {
            return true;
     }
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