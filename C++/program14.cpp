#include<iostream>
using namespace std;

class FrequencyX
{
      public:
      int iNo;

      FrequencyX()
      {
            iNo = 0;
      }
      FrequencyX(int i)
      {
            iNo = i;
      }
      void DisplayFrequency()
      {
            int iDigit = 0;
            int Frequency [10] = {0};
            int iTemp = iNo;

            while(iTemp!=0)
            {
                  iDigit = iTemp % 10;

                  Frequency[iDigit]++;

                  iTemp = iTemp / 10;
            }

            for(int icnt = 0;icnt<10;icnt++)
            {
                  if(Frequency[icnt] > 0)
                  {
                        cout<<icnt<<" Occuran at "<<Frequency[icnt]<<" times "<<"\n";
                  }
            }
      }
};
int main()
{
      int iValue = 0;

      cout<<"Enter The Number :\n";
      cin>>iValue;

     FrequencyX obj(iValue);

     obj.DisplayFrequency();

      return 0;


}