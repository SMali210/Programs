#include<iostream>
using namespace std;

class Number
{
      public:

            int iNo;

            Number(int i)
            {
                  iNo = i;
            }
            int Factorial()
            {
                  int icnt = 0;
                  int iFact = 1;

                  for(icnt = 1;icnt<=iNo;icnt++)
                  {
                       iFact = iFact * icnt;
                        
                  }
                  return iFact;
            }
            
};
int main()
{
      int iValue = 0;
      int iRet = 0;

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

    iRet = obj.Factorial();

    cout<<"Factorial of numbers are :"<<iRet<<"\n";

      return 0;

}