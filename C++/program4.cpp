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

                  for(icnt = iNo;icnt>=1;icnt--)
                  {
                       
                        cout<<icnt<<"\t";
                  }
            }
};
int main()
{
      int iValue = 0;
     

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

      obj.Display();

      return 0;

}