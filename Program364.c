#include<stdio.h>

void Dispaly(char * str)
{
    

      if(*str !='\0')
      {
          
            str++;
            Dispaly(str);
             printf("%c\n",*str);  // back tracking cha vedes 
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