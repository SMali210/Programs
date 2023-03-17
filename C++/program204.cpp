#include<iostream>
using namespace std;

// Input :7987677
// output : Maximum times occured digit 7 and its Frequncy 4
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
         void MaxFrequency()
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

            int iMaxFrequency =0;
            int imaxDigit = 0;

            for(int icnt = 0;icnt<10;icnt++)
            {
                  if(Frequency[icnt]> iMaxFrequency)
                  {
                        iMaxFrequency = Frequency[icnt];
                        imaxDigit = icnt;
                  }
            }

            cout<<"Maximum times occured digit is "<<imaxDigit<<"and its frequncy is :"<<iMaxFrequency<<"\n";
         }

         
};
int main()
{
      int iValue = 0;
      

      cout<<"Plese enter the Number :"<<"\n";
      cin>>iValue;

      DigitX obj(iValue);

       obj.MaxFrequency();


      
      return 0;
}