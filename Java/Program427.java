import java.io.*;
import java.util.*;


class Program427
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The string :");

        String str = sobj.nextLine();
        
        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

        System.out.println("Words from the string");
        int iMax = 0;
        int MaxIndex = 0;

        for(int i =0;i<Arr.length;i++)
        {
           if(iMax < Arr[i].length())
           {
                  iMax = Arr[i].length();
                  MaxIndex = i;
           } 
        }

        System.out.println("Largest Word from the String is : "+Arr[MaxIndex]+" With the length :"+iMax);
    }
}