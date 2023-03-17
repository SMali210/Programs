import java.io.*;
import java.util.*;


class Program426
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The string :");

        String str = sobj.nextLine();
        
        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

        System.out.println("Words from the string");

        for(int i =0;i<Arr.length;i++)
        {
            System.out.println(Arr[i] +" Length : "+Arr[i].length());
        }
    }
}