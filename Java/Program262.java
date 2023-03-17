import java.util.*;

class Program262
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements:");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];

            for(int i = 0;i<Arr.length;i++)
            {
                  System.out.println("Enter The Elements:");
                  Arr[i] = sobj.nextInt();
            }

            ArrayDemo obj = new ArrayDemo();
            obj.Display(Arr);
      }
}
class ArrayDemo
{
      public void Display(int Arr[])
      {
            for(int i=0;i<Arr.length;i++)
            {
                  if(Arr[i] % 5 == 0)
                  {
                        System.out.print(Arr[i]+"\t");
                  }
            }
      }
}