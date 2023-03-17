#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1 ,int iNo2)
{
      bool Flag = true;
      int iDigit = 0;
      int iFrequency1[20] = {0};
      //int iFrequency2[10] = {0};
      int iNo = iNo1 && iNo2;

      while(iNo !=0)//&&(iNo2!=0))
      {
            iDigit = iNo % 10;

            iFrequency1[iDigit]++;

            iNo = iNo / 10;

         //   iDigit = iNo2 % 10;

           // iFrequency2[iDigit]++;

            //iNo2 = iNo2 /10;
      }

      for(int icnt = 0;icnt<10;icnt++)
      {
            if(iFrequency1[icnt] != iFrequency1[icnt] )//iFrequency2[icnt])
            {
                  Flag = false;

                  break;
            }
      }
      return Flag;

}
int main()
{
      bool bRet = false;
      int iValue1 = 0;
      cout<<"Enter The First Number :\n";
      cin>>iValue1;

      int iValue2 = 0;
      cout<<"Enter The Second Number :\n";
      cin>>iValue2;

      bRet = CheckAnagram(iValue1,iValue2);

      if(bRet == true)
      {
            cout<<"Numbers are Anagram ";
      }
      else
      {
            cout<<"Numbers are not Anagram ";
      }

      return 0;
}