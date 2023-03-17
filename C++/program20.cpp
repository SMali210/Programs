#include<iostream>
using namespace std;

class Array
{
      public:
             int *Arr;
             int iSize;
             
             Array(int i)
             {
                  iSize = i;
                  Arr = new int[iSize];
             }
             ~Array()
             {
                  delete[]Arr;
             }
             void Accept()
             {
                  int icnt = 0;
                  cout<<"Enter The Numbers :\n";

                  for(icnt = 0;icnt<iSize;icnt++)
                  {
                        cin>>Arr[icnt];
                  }                
             }
             void Display()
             {
                  int icnt = 0;

                  for(icnt=0;icnt<iSize;icnt++)
                  {
                        cout<<Arr[icnt]<<"\n";
                  }
                  cout<<"\n";
             }
             int SumationAll()
             {
                  int icnt = 0;
                  int iSum = 0;

                  for(icnt = 0;icnt<iSize;icnt++)
                  {
                        iSum = iSum + Arr[icnt];
                  }
                  return iSum;
             }
};
int main()
{
      int iLength = 0;
      int iRet = 0;

      cout<<"Please Enter the number : \n";
      cin>>iLength;

      Array obj(iLength);

      obj.Accept();
      obj.Display();

      iRet = obj.SumationAll();

      cout<<"Addition of all Numbers are:"<<iRet<<"\n";

      return 0;


}