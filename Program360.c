#include<stdio.h>

int CountCapitaalR(char * str)
{
     static int icnt = 0;

      if(*str !='\0')
      {
           if((*str >='a')&&(*str <= 'z'))
           {
                  icnt++;
           }
            str++;
            CountCapitaalR(str);
      }
      return icnt;
}
int main()
{
      char Arr[20];
      int iRet = 0;

      printf("Enter The string : \n");
      scanf("%[^\n]s",Arr);

      iRet = CountCapitaalR(Arr);

      printf("Samml letter  is : %d\n",iRet);

      return 0;
}