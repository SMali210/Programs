import java.util.*;
import java.io.*;

class program402
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name");
            String FileName = sobj.nextLine();

            File fobj = new File(FileName);

          fobj.createNewFile();
      }
}