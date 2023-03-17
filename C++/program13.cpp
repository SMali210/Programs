#include<iostream>
using namespace std;

class Arrayx
{     
      public:

      int *Arr;
      int iSize;

      Arrayx()
      {
            iSize = 0;
      }
      Arrayx(int i)
      {
            iSize = i;
            Arr = new int [iSize];
      }
      ~Arrayx()
      {
            delete []Arr;
      }
      void Accept()
      {
            cout<<" Numbers :Are : \n";

            for(int icnt = 0; icnt < iSize;icnt++)
            {
                  cin>>Arr[icnt];
            }
      }
      void Display()
      {
            cout<<"Enter The Numbers : \n";

            for(int icnt = 0;icnt<iSize;icnt++)
            {
                  cout<<Arr[icnt]<<"\n";
            }
      }
};
class MarvellousLB : public Arrayx
{
      public:

      MarvellousLB(int i) :Arrayx(i)
      { }

      int MaximumNumber()
      {
            int icnt = 0;
            int imax = Arr[0];

            for(icnt = 0; icnt<iSize;icnt++)
            {
                  if(Arr[icnt] > imax)
                  {
                        imax = Arr[icnt];
                  }
            }
            return imax;
      }
};
int main()
{
      int iLength = 0;
      int iRet = 0;

      cout<<"Enter The Size Of Array :\n";
      cin>>iLength;

      MarvellousLB *obj = new MarvellousLB(iLength);

      obj->Accept();
      obj->Display();

      iRet = obj->MaximumNumber();

      cout<<"Maximum Number  of Array is :"<<iRet<<"\n";

      delete obj;

      return 0;

}