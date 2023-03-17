import java.io.*;
import java.util.*;


class Program330
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The string :");
        String str = sobj.nextLine();

        System.out.println("Enter The Word that you want to search");
        String word = sobj.nextLine();
        
        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

       int iCount = 0;

        for(int i =0;i<Arr.length;i++)
        {
          if(Arr[i].equals(word))
          {
            iCount++;
          }
        }

        System.out.println("Frequeny Demo word is :"+iCount);

    }
}