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
            bool CheckPerfectNumber()
            {
                  int Ans = 0;
                  Ans = AdditionFactors();

                  if(Ans == iNo)
                  {
                        return true;
                  }
                  else
                  {
                        return false;

                  }
            }
            
};
int main()
{
      int iValue = 0;
      bool bRet = false;
      int iRet = 0;

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj1(iValue);
      Number obj2(iValue);

     bRet = obj1.CheckPerfectNumber();
      iRet = obj2.AdditionFactors();
      cout<<"Addition is :"<<iRet<<"\n";

     if(bRet == true)
     {
        cout<<" It is a perfect number \n";
     }
     else
     {
         cout<<"It is not a perfect Number  \n";
     }


      return 0;

}