#include<stdio.h>

int strlengthR(char * str)
{
     static int icnt = 0;

      if(*str !='\0')
      {
            icnt++;
            str++;
            strlengthR(str);
      }
      return icnt;
}
int main()
{
      char Arr[20];
      int iRet = 0;

      printf("Enter The string : \n");
      scanf("%[^\n]s",Arr);

      iRet = strlengthR(Arr);

      printf("String length is : %d\n",iRet);

      return 0;
}