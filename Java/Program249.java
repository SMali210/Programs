
import java.util.*;

class Program249
{
     

      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            int iNo1 = 0,iNo2 = 0,iAns = 0;

            System.out.println("Enter the Fist Number :");
            iNo1 = sobj.nextInt();

            System.out.println("Enter the Fist Number :");
            iNo2 = sobj.nextInt();

            Arithematic aobj = new Arithematic(iNo1 ,iNo2);

            iAns = aobj.Addition();

            System.out.println("Addition is :"+iAns); // contanination
      }
}

class Arithematic
{
      public int iValue1;
      public int iValue2;

      public Arithematic(int i ,int j)
      {
            iValue1 = i;
            iValue2 = j;
      }

      public int Addition()
      {
            int Sum = 0;
            Sum = iValue1 + iValue2;
            return Sum;
      }
}