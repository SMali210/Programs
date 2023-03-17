
import java.util.*;

class Program253
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

            for(icnt = 2;icnt <= (iNo/2);icnt+=2) //iCnt = iCnt+2
            {
                  if((iNo % icnt) == 0)
                  {
                        System.out.println("Even Factor are :"+icnt);
                  }
            }
     }
}