import  java.util.*;

class Program299
{
      public static void main(String arg[])   //
      {
            Pattern pobj = new Pattern();
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter numbers of rows :");
            int i = sobj.nextInt();

            System.out.println("Enter numbers of colum :");
            int j = sobj.nextInt();

            pobj.Display(i,j);
      }
}
class Pattern
{
      public void Display(int iRow ,int iCol)
      {
            int iCnt = 1;
            for(int i= 1;i<=iRow;i++)
            {
                  for(int j = 1;j<=iCol;j++)
                  {
                        
                        System.out.print(iCnt+"\t");
                        iCnt++;
                  }
                  System.out.println();
            }
      }
}
