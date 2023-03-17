#include<iostream>
using namespace std;


class Numbers
{
      public:
       int iNo;

       Numbers(int i)
       {
            iNo = i;
       }

       int  Factorial()
       {
            int iFact = 1;
            int icnt = 0;

            for(icnt = 1; icnt<= iNo;icnt++)
            {
                  iFact = iFact * icnt;
            }
            return iFact;
       }

};
int main()
{
      int iValue = 0;
     int  iRet = 0;

      cout<<"Enter the Number :\n";
      cin>>iValue;

      Numbers obj(iValue);

     iRet = obj.Factorial();

     cout<<"Factorial are :"<<iRet<<"\n";

      return 0;
}
