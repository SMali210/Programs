import java.io.*;
import java.util.*;


class Program425
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The string :");

        String str = sobj.nextLine();
        
        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}