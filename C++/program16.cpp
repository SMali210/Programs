#include<iostream>
using namespace std;

class Digits
{
      public:
      int iNo;

      Digits()
      {
            iNo = 0;
      }
      Digits(int i)
      {
            iNo = i;
      }
      int MaximumDigit()
      {
            int iMax = 0;
            int iDigit = 0;
            int iTemp = iNo;

            while(iTemp != 0)
            {
                  iDigit = iTemp % 10;

                  if(iDigit > iMax)
                  {
                        iMax = iDigit;
                  }

                  iTemp = iTemp / 10;
            }
            return iMax;
      }
};
int main()
{

      int iValue = 0;
      int iRet = 0;

      cout<<"Enter The Number are :\n";
      cin>>iValue;

      Digits obj(iValue);

     iRet = obj.MaximumDigit();

     cout<<"Maximum Number of Digits are :"<<iRet<<"\n";

      return 0;
}