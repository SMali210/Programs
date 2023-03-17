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
            void DisplayEvenFactors()
            {
                  int icnt = 0;
                  

                  for(icnt =1;icnt<=(iNo/2);icnt++)
                  {
                      
                        if(((iNo % icnt)== 0) && ((icnt % 2)==0))
                        {
                              cout<<icnt<<"\n";
                        }
                        
                  }
                  
                
            }
            
};
int main()
{
      int iValue = 0;
     

      cout<<"Enter the Number :"<<"\t";
      cin>>iValue;

      Number obj(iValue);

     obj.DisplayEvenFactors();


      return 0;

}