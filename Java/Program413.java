import java.io.*;
import java.util.*;

class Program413
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
           System.out.println("Enter the Folder name");
           String FolderName = sobj.nextLine();

           File fobj = new File(FolderName);

           if(fobj.exists())
           {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are : "+allfiles.length);

                System.out.println("File name are : ");

                for(int i = 0;i<allfiles.length;i++)
                {
                        System.out.println("File name :"+allfiles[i].getName()+"size of File : " +allfiles[i].length());

                }
           }
           else
           {
                System.out.println("There is no such folder..");
           }


        }// End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    } //end of main
}   // end of class