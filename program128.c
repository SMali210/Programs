#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
      if((ch >='A') &&( ch <= 'Z'))
      {
            return true;
      }
      else
      {
            return false;
      }
}

int main()
{

      char cValue = '\0';
      bool bRet = false;

      printf("Plese enter one character :");
      scanf("%c",&cValue);

      bRet = IsCapitalX(cValue);
      if(bRet == true)
      {
            printf("%c is a Capital case letter\n",cValue);
      }
      else
      {
            printf("%c is not a Capial case letter\n",cValue);
      }
      return 0;
}