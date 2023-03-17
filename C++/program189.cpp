#include<iostream>
using namespace std;

class Arithmatic
{
      public :
         
         int iValue1;
         int iValue2;

         Arithmatic()
         {
            iValue1 = 0;
            iValue2 = 0;
         }
         Arithmatic(int i,int j)
         {
            iValue1 = i;
            iValue2 = j;
         }

         int Addition()
         {
            int iAdd = 0;

            iAdd = iValue1 + iValue2;

            return iAdd;
         }
};

int main()
{
      int iRet = 0;
      
      Arithmatic obj1;
      Arithmatic obj2(10,11);
      Arithmatic obj3(20,11);

      iRet = obj1.Addition();
      cout<<"Addition is :"<<iRet<<"\n";

      iRet = obj2.Addition();
      cout<<"Addition is :"<<iRet<<"\n";

      iRet = obj3.Addition();
      cout<<"Addition is :"<<iRet<<"\n";


      return 0;

}