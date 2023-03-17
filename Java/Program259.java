import java.util.*;
class Program259
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of elements that you want to create ");
            int iSize = sobj.nextInt();

            MarvellousX obj = new MarvellousX(iSize);

            obj.Accept();
            obj.Display();

            int iRet = obj.Addition();

            System.out.println("Addition of all elements is : "+iRet);
      }
}
class ArrayX
{
      public int Arr[];

      public ArrayX(int iSize)
      {
            Arr = new int[iSize];
      }

      public void Accept()
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter " +Arr.length+ " Elements");

            for(int icnt = 0;icnt < Arr.length;icnt++)
            {
                  System.out.println("Enter the elemnts no"+(icnt+1));
                  Arr[icnt] = sobj.nextInt();
            }
      }

      public void Display()
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

      public int Addition()
      {
            int iSum = 0;

            for(int icnt = 0;icnt <Arr.length;icnt++)
            {
                  iSum = iSum + Arr[icnt];
            }
            return iSum;
      }
}
