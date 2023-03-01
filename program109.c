/*
      Row = 4
      Col = 4

  @  1   2   3   4
   
   1   @   3     4

   1    2    @    4

    
     
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
      int i = 0  , j = 0;

      if(iRow != iCol)
      {
            printf("Row number and colum are different\n");

            return;
      }
      for(i = 1;i <= iRow;i++)
      {
            for(j = 1;j <= iCol;j++)
            {
                 if(i==j)
                 {
                        printf("@\t");   //
                 }
                 else
                 {
                       printf("%d\t",j);
                 }
                  
            }
            

            printf("\n");
      }


}
int main()
{
      int ivalue1 = 0;
      int ivalue2 = 0;

      printf("Enter The Number Of Row :");
      scanf("%d",&ivalue1);

      printf("Enter The Number Of Colum :");
      scanf("%d",&ivalue2);

      Display(ivalue1,ivalue2);

      return 0;
}