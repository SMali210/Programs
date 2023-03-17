
import java.util.*;

class Program250
{
     
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            int iNo = 0;

            System.out.println("Enter the  Number :");
            iNo = sobj.nextInt();

            Numbers nobj = new Numbers();

            nobj.EvenFactorDisplay(iNo);

           // System.out.println("Addition is :"+iAns); // contanination
      }
}

class  Numbers
{
     public void EvenFactorDisplay(int iNo)
     {
            int icnt = 0;

            for(icnt = 1;icnt <= (iNo/2);icnt++)
            {
                  if((iNo % icnt == 0)&&(icnt % 2 == 0))
                  {
                        System.out.println("Even Factor are :"+icnt);
                  }
            }
     }
}