#include<iostream>
using namespace std;

// problems of n Number

class Arrayx
{
      public:
            int *Arr;
            int iSize;

            Arrayx(int i)
            {
                  iSize = i;
                  Arr = new int[iSize];
            }

            void Accept()
            {
                  cout<<"Plese enter the number :"<<"\n";
                  int icnt = 0;

                  for(icnt = 0;icnt < iSize;icnt++)
                  {
                        cin>>Arr[icnt];
                  }
            }
            void Display()
            {
                  cout<<"Elements of array :"<<"\n";
                  int icnt = 0;
                  
                  for(icnt = 0;icnt < iSize;icnt++)
                  {
                        cout<<Arr[icnt]<<"\t";
                  }
                  cout<<"\n";
            }


};
int main()
{
      int iLength = 0;

      cout<<"Enter the number of elements :"<<"\n";
      cin>>iLength;

      Arrayx obj(iLength);

      obj.Accept();
      obj.Display();
      

      return 0;
}