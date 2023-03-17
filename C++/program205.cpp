#include<iostream>
using namespace std;

// INput 789567 597768
// output Numbers are anagram

bool CheckAnagram(int iNo1 ,int iNo2)
{
      int Frequency1[10] = {0};
      int Frequency2[10] ={0};
      bool Flag = true;

      while(iNo1 != 0)
      {
            Frequency1[(iNo1 % 10)]++;
            iNo1 = iNo1 / 10;
      }
      while(iNo2 != 0)
      {
            Frequency2[(iNo2 % 10)]++;
            iNo2 = iNo2 / 10;
      }
      for(int icnt = 0;icnt <10;icnt++)
      {
            if(Frequency1[icnt] != Frequency2[icnt])
            {
                  Flag = false;
                  break;
            }
      }
      return Flag;
}
int main()
{
      int iValue1 = 0;
      int iValue2 = 0;
      bool bRet = false;

      cout<<"Enter the First Number :"<<"\n";
      cin>>iValue1;

      cout<<"Enter the second Number :"<<"\n";
      cin>>iValue2;

      bRet = CheckAnagram(iValue1,iValue2);

      if(bRet == true)
      {
            cout<<"It is angram numbers \n";
      }
      else
      {
            cout<<"It is not Angram Number \n";
      }
}