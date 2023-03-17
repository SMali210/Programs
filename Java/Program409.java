import java.util.*;
import java.io.*;

class Program409
{
      public static void main(String arf[]) 
      {
            Scanner sobj = new Scanner(System.in);

            try
            {
                  System.out.println("Enter The Source File name :");
                  String Source = sobj.nextLine();
                  System.out.println("Enter The Destination File name :");
                  String Destination = sobj.nextLine();

                  File fSource  = new File(Source);
                  File fdest = new File(Destination);

                  boolean bret = fSource.exists();
                  if(bret == false)
                  {
                        System.out.println("Source file is not existing..");
                        return;
                  }

                  bret = fdest.createNewFile();
                  if(bret == false)
                  {
                        System.out.println("Unable to create distination file..");
                        return;
                  }

            }// end of try
            catch(Exception obj)
            {
                  System.out.println("Exception occured : "+obj);
            }
      }
}