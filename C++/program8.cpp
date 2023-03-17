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
            void DisplayFactors()
            {
                  int icnt = 0;
                  

                  for(icnt = 1;icnt<=(iNo/2);icnt++)
                  {
                      
                        if((iNo % icnt)== 0)
                        {
                              cout<<"Factors are :"<<icnt<<"\n";
                        }
                        
                  }
                  
                
            }
            
};
int main()
{
      int iValue = 0;
      

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

     obj.DisplayFactors();


      return 0;

}