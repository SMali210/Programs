#include<stdio.h>
#include<stdbool.h>

int main()
{

      char Arr [30];


      printf("Plese enter full name\n :");
      //scanf("%s",Arr);
      scanf("%[^'\n']s",Arr);

      printf("Your Name Is : %s\n",Arr);
     
      return 0;
}