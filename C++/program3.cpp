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
            void Display()
            {
                  int icnt = 0;

                  for(icnt = 1;icnt<=iNo;icnt++)
                  {
                       
                        cout<<icnt<<"\t";
                         cout<<"*\t";
                  }
            }
};
int main()
{
      int iValue = 0;
      int iRet = 0;

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

      obj.Display();

      return 0;

}