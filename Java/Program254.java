
import java.util.*;

class Program254
{
     
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            int iNo1 = 0;
            int iNo2 = 0;

            System.out.println("Enter the First  Number :");
            iNo1 = sobj.nextInt();

            System.out.println("Enter the Second Number :");
            iNo2 = sobj.nextInt();

            Numbers nobj = new Numbers();

            nobj.CommanFactorDisplay(iNo1,iNo2);

           // System.out.println("Addition is :"+iAns); // contanination
      }
}

class  Numbers
{
     public void CommanFactorDisplay(int iNo1 ,int iNo2)
     {
            int icnt = 0;

            System.out.println("Comman factors are :");
            
            for(icnt = 1;icnt <= (iNo1/2) &&(icnt <= iNo2/2);icnt++) //iCnt = iCnt+2
            {
                  if(((iNo1 % icnt) == 0) && (iNo2 % icnt == 0))
                  {
                        System.out.println(icnt);
                  }
            }
     }
}