import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program415
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
                  byte Buffer[] =  new byte[1024];
                  int ret = 0;

                for(int i = 0;i<allfiles.length;i++)
                {
                        System.out.println("File name :"+allfiles[i].getName()+"size of File : " +allfiles[i].length());
                        FileInputStream fiobj = new FileInputStream(allfiles[i]);

                        while((ret = fiobj.read(Buffer)) !=-1)
                        {
                              String str = new String(Buffer,StandardCharsets.UTF_8);
                              System.out.println(str);
                        }
                        System.out.println("------------------------------");
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