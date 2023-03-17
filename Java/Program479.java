import java.util.*;

class Program479
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the String");
            String str = sobj.nextLine();

            char Arr[] = str.toCharArray();

            System.out.println(str.length());
            System.out.println(Arr.length);

            int Count = 0;
            int i = 0;
            while(i < Arr.length)
            {
                  if((Arr[i] >='a')&&(Arr[i]<='z'))
                  {
                        Count++;
                  }
                  i++;
            }
            System.out.println("Small charcter are :"+Count);
      }
}