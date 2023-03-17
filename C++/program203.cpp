#include<iostream>
using namespace std;

class DigitX
{
      public:
         int iNo;
      
         DigitX()
         {
            iNo = 0;
         }
         DigitX(int i)
         {
            iNo = i;
         }
         void DisplayFrequency()
         {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};  // Array of Frquency

            while(iTemp !=0)
            {
                  iDigit = iTemp % 10;

                  Frequency[iDigit]++;

                  iTemp = iTemp / 10;
            }
            for(int icnt = 0;icnt<10;icnt++)
            {
                  if(Frequency[icnt]>0)
                  {
                        cout<<icnt<<" Occrs at "<<Frequency[icnt]<<" times"<<"\n";
                  }
            }
         }

         
};
int main()
{
      int iValue = 0;
      

      cout<<"Plese enter the Number :"<<"\n";
      cin>>iValue;

      DigitX obj(iValue);

      obj.DisplayFrequency

      return 0;
}