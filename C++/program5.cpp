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
            int Addition()
            {
                  int icnt = 0;
                  int isum = 0;

                  for(icnt = 1;icnt<=iNo;icnt++)
                  {

                       isum = isum + icnt;    
                  }
                  return isum;
            }
            
};
int main()
{
      int iValue = 0;
      int iRet = 0;

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

    iRet = obj.Addition();

    cout<<"Addition is all numbers are :"<<iRet<<"\n";

      return 0;

}