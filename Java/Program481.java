import java.util.*;

class Program481
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the String");
            String str = sobj.nextLine();

            String newstr = str.trim(); // inbuilt method to removed  aadhi che sevatche white sapce

            String Arr[] = newstr.split(" ");
            System.out.println("Numbers of words are :"+Arr.length);
      }
}