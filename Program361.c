#include<stdio.h>

void Dispaly(char * str)
{
    

      if(*str !='\0')
      {
           printf("%c\n",*str);
            str++;
            Dispaly(str);
      }
      
}
int main()
{
      char Arr[20];
      int iRet = 0;

      printf("Enter The string : \n");
      scanf("%[^\n]s",Arr);

       Dispaly(Arr);

      return 0;
}