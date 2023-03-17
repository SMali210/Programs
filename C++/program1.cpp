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
            int DivisibleByThreeAndFive()
            {
                  if((iNo % 3 == 0)&&(iNo % 5==0))
                  {
                        return 1;
                  }
                  else
                  {
                        return 0;
                  }
            }
};
int main()
{
      int iValue = 0;
      int iRet = 0;

      cout<<"Enter the Number :"<<"\n";
      cin>>iValue;

      Number obj(iValue);

      iRet = obj.DivisibleByThreeAndFive();

      if(iRet==1)
      {
            printf("Number is Divisible By Five and Three");
      }
      else
      {
            printf("Number is Not Divisible By Five and Three ");
      }
      
      return 0;

}