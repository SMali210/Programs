import java.util.*;

class Program436
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size Of Array");
            int Size = sobj.nextInt();

            Sorting obj = new Sorting(Size);

            obj.Accept();
            obj.Display();
      }
}
class Sorting
{
      private int Arr[];

      public Sorting(int Size)
      {
            Arr = new int[Size];
      }

      public void Accept()
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Elements");

            for(int i = 0;i<Arr.length;i++)
            {
                  Arr[i] = sobj.nextInt();
            }
  
      }
      public void Display()
      {
            System.out.println("Elements of Array are :");

            for(int i = 0;i<Arr.length;i++)
            {
                  System.out.println(Arr[i]);
            }
      }
}