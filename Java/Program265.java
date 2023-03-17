import java.util.*;
class Program265
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of elements that you want to create ");
            int iSize = sobj.nextInt();

            MarvellousX obj = new MarvellousX(iSize);

            obj.Accept();
            obj.Display();

            obj.Reverse();

            System.out.println("Array After Revers Opertion :");

            obj.Display();
      }
}
class ArrayX
{
      
      protected int Arr[];

      public ArrayX(int iSize)
      {
            Arr = new int[iSize];
      }

      protected void Accept()
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter " +Arr.length+ " Elements");

            for(int icnt = 0;icnt < Arr.length;icnt++)
            {
                  System.out.println("Enter the elemnts no"+(icnt+1));
                  Arr[icnt] = sobj.nextInt();
            }
      }

      protected void Display()
      {
            System.out.println("Elements of Array are :");
            {
                  for(int icnt = 0;icnt < Arr.length;icnt++)
                  {
                        System.out.print(Arr[icnt]+"\t");
                  }

                  System.out.println();
            }
      }
}
class MarvellousX extends ArrayX
{
      public MarvellousX(int iSize)
      {
            super(iSize);
      }

      public void Reverse()
      {
            int iStrat = 0;
            int iEnd = Arr.length-1;
            int itemp = 0;

            while(iStrat < iEnd)
            {
                  itemp = Arr[iStrat];
                  Arr[iStrat] = Arr[iEnd];
                  Arr[iEnd] = itemp;

                  iStrat++;
                  iEnd--;
            }
      }

    
}
