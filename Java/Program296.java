import  java.util.*;

class Program295
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
            char ch1 = 'A';
            for(int i = 1;i<=iRow;i++)
            {
                  for(int j = 1;j<=iCol;j++)
                  {
                        if(ch1 == 'E')
                        {
                              ch1 = 'A';
                        }
                       
                       System.out.print((char)ch1 +"\t");
                       ch1++;
                      
                  }
                  System.out.println();
                  
                 
            }
      }
}
