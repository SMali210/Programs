import java.util.*;

class Program261
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of Arry");
            int iSize = sobj.nextInt();

            int Arr[] = [iSize];

            System.out.println()
            int iSum = 0;

            for(int i = 0;i<Arr.length;i++)
            {
                  iSum = iSum + Arr[i];
            }

            System.out.println("Addition is : "+iSum);
      }
}