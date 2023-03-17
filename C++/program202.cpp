#include<iostream>
using namespace std;

class DigitX
{
      public:
         int iNo;
      
         DigitX()
         {
            iNo = 0;
         }
         DigitX(int i)
         {
            iNo = i;
         }

         int SumEvenDigit()
         {
            int isum = 0;
            int iDigit = 0;
            int iTemp = iNo;

            while(iTemp!=0)
            {
                  iDigit = iTemp % 10;

                  if((iDigit % 2) == 0)
                  {
                        isum = isum + iDigit;
                  }

                 iTemp = iTemp / 10;
            }
            return isum;
         }
};
int main()
{
      int iValue = 0;
      int iRet = 0;

      cout<<"Plese enter the Number : \n";
      cin>>iValue;

      DigitX obj(iValue);

      iRet = obj.SumEvenDigit();

      cout<<"Summation of digit are :"<<iRet<<"\n";

      return 0;
}