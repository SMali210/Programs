#include<iostream>
using namespace std;

class FrequencyX
{
      public:
      int iNo;

      FrequencyX()
      {
            int iNo = 0;
      }
      FrequencyX(int i)
      {
            iNo = i;
      }

      void MaximumFrequency()
      {
            int iDigit = 0;
            int Frequency [10] ={0};
            int iTemp = iNo;

            while(iTemp !=0)
            {
                  iDigit = iTemp % 10;

                  Frequency[iDigit]++;

                  iTemp = iTemp / 10;
            }
         
          int MaxFrequency = 0;
          int MaxDigit = 0;
          int icnt = 0;

          for(icnt = 0;icnt<10;icnt++)
          {
             if(Frequency[icnt] > MaxFrequency)
             {
                  MaxFrequency = Frequency[icnt];
                  MaxDigit = icnt;
             }

          }

          cout<<" Maximum times Occured digits "<<MaxDigit<<" And its Frequency "<<MaxFrequency<<"\n";

      }

};

int main()
{
      int iValue = 0;

      cout<<"Enter The Number \n";
      cin>>iValue;

      FrequencyX obj(iValue);

      obj.MaximumFrequency();

      return 0;
}