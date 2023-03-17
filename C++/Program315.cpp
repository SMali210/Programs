#include<iostream>
using namespace std;

class ArrayX
{
      public:

      int *Arr;
      int iSize;

      ArrayX(int i)
      {
            iSize = i;
            Arr = new int [iSize];
             
      }

      void Accept()
      {
            cout<<"Enter The Elemnts :"<<"\n";

            for(int icnt = 0;icnt <iSize;icnt++)
            {
                  cin>>Arr[icnt];

            }
      }
      void Display()
      {
            cout<<"Elemnts of the Array:"<<"\n";

            for(int icnt = 0;icnt <iSize;icnt++)
            {
                  cout<<Arr[icnt];

            }
      }
};

int main()
{
      ArrayX obj(5);
      obj.Accept();
      obj.Display();
}