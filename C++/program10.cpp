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
            int AdditionFactors()
            {
                  int icnt = 0;
                  int isum = 0;
                  

                  for(icnt = 1;icnt<iNo;icnt++)
                  {
                      
                        if((iNo % icnt)== 0)
                        {
                              isum = isum + icnt;
                        }
                        
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

     iRet = obj.AdditionFactors();

     cout<<"Addition of Factor are "<<iRet<<"\n";
 

      return 0;

}