/*
      Row = 4
      Col = 4

      1  2  3  4
      1  2  3  4
      1  2  3  4
      1  2  3  4
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
      int i = 0  , j = 0;

      for(i = 1;i <= iRow;i++)
      {
            for(j = 1;j <= iCol;j++)
            {
                  printf("%d\t",j);
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