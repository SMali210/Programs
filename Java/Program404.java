import java.util.*;
import java.io.*;

class Program404
{
      public static void main(String arg[])throws IOException
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name");
            String FileName = sobj.nextLine();

            File fobj = new File(FileName);

            if(fobj.exists()) 
            {
                  System.out.println("File Size is : "+fobj.length());
            }
            else
            {
                  System.out.println("There is no File");
            }    
      }
}