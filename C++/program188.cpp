#include<iostream>
using namespace std;

class Arithmatic
{
      public :
      int Addition(int iValue1,int iValue2)
      {
            int iAns = 0;

            iAns = iValue1 + iValue2;

            return iAns;
      }
};

int main()
{
      int iNo1 = 0;
      int iNo2 = 0;
      int iRet = 0;
      cout<<"Enter first number :\n";
      cin>>iNo1;

      cout<<"Enter Second number :\n";
      cin>>iNo2;

      Arithmatic obj;   // object 

     iRet =  obj.Addition(iNo1,iNo2);

      cout<<"Addition is :"<<iRet<<"\n";

      return 0;

}